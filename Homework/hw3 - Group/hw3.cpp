/*------------------------------------------------------------------------------
 * Programmer: Yuqi Zheng & Ben Weinberg
 * Date: 3/7/17
 * Description: The 3PI robot will follow a line that is given to it. 
 *                   When road signs are given on the line the robot will
 *                   speed up or slow down depending on the sign given.
 *------------------------------------------------------------------------------*/

#include "robotHelperFunctions.h"

int main() {

    // set up the 3pi
    initializeRobot();
    pidController PID;
    trackSelector trackSelect;

    
    //define variables
    unsigned int sensors[5] = {0}; // an array to hold sensor values
    unsigned int position;
    int different;
    int last_different = 0;
    unsigned char volume = 15;
    int counter = 0;
    int change = 0;
    int level = 4;
    int speed;

    //Basic setup
    trackSelect.setM_TrackType(TRACK0);
    set_motors(trackSelect.getM_Speed(), trackSelect.getM_Speed());
    int basespeed = 0;
    time_reset();
    //Main Loop
    while (1) {
        position = read_line(sensors, IR_EMITTERS_ON);

        //If the robot detects a sign (all sensors go over a black line)
        if (sensors[0]>200&& sensors[1] > 200 && sensors[2] > 200 && sensors[3] > 100 && sensors[4] > 200 ) {
            play_frequency(4000, 25, volume);
            change=1;
        }
        //Speed is adjusted based on the number of lines the robot goes over (signs)
        else{
           if(change==1){
               change=0;
               counter++;
               level=counter;
               time_reset();

           }
            else{
               if(get_ms()>500){
                   counter=0;
                   clear();
                   time_reset();
               }
           }

        }
        //Adjust the speed of the robot based on the level given
        if (level == 1||level==0)
        {
            clear();
            print("sign 1");
            speed =155;
        }
        else if (level == 2)
        {
            clear();
            print("sign 2");
            speed = 160;
        }
        else if (level ==3)
        {
            clear();
            print("sign 3");
            speed = 180;
        }
        else if (level >= 4)
        {
            clear();
            print("sign 4");
            speed = 190;
        }
        //Line following:
        different = ((int) position) - 2000;
        int derivative = different - last_different;
        basespeed += different;
        last_different = different;
        int power_difference = different / 20 + basespeed / 10000 + derivative * 3 / 2;
        if (power_difference > speed)
            power_difference = speed;
        if (power_difference < -speed)
            power_difference = -speed;
        if (power_difference < 0)
            set_motors(speed + power_difference, speed);
        else
            set_motors(speed, speed - power_difference);
    }
}



