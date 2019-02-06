/*-----------------------------------------------------------------------------
 * Programmers: Ben Weinberg & Yuqi Zheng
 * Description: TODO (describe what your program does)
 * To compile:
 * Select target all
 * To load program onto robot (once usb programmer plugged in and robot on):
 * Select target flash - Run / Build&Run
 ----------------------------------------------------------------------------*/
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include <avr/pgmspace.h> /* allow use of program space */
#include "battery.h"

static void printInitialMessage()
{
  /* clear lcd */
  clear();
  /* set lcd position to beginning of first line */
  lcd_goto_xy(0, 0);
  print("Hello!");   /* TODO: modify to say something else */
  /* set lcd position to beginning of second line */
  lcd_goto_xy(0, 1);
  print("I am 3pi");   /* TODO: modify to say something else */
  return;
}

int main( void )
{
  /* perform battery check */
  bat_check();

  printInitialMessage();

  /* main loop that runs forever */
  bool isFirst = false;
  while( 1 )
    {
        while (!button_is_pressed(BUTTON_B))
        {
            clear();
            lcd_goto_xy(0, 0);
            print("Name:");
            lcd_goto_xy(0, 1);
            print("Ben");
            delay_ms(1000);
            clear();
            lcd_goto_xy(0, 0);
            print("And");
            lcd_goto_xy(0, 1);
            print("Yuqi");
            delay_ms(1000);

        }
        while(!button_is_pressed(BUTTON_A))
        {
            clear();
            lcd_goto_xy(0, 0);
            print("Thank you");
            lcd_goto_xy(0, 1);
            print("for pushing");
            delay_ms(1000);
            clear();
            lcd_goto_xy(0, 0);
            print("button B");
            lcd_goto_xy(0, 1);
            print(":D");
            delay_ms(1000);
        }
        //TODO: (1) Print alernating messages with 1 second delay
      //TODO; (2) Make print a message based on which button is pressed.
    /* short delay */
    delay_ms(1000); //TODO: Fix this to proper value. (i.e. look up in 3pi documentation the delay_ms function
    }
}
