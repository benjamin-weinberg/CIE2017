/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg & Yuqi Zheng
 * Date: 2/20/17
 * Description: Homework 2. Movie rental system on a 2pi robot
 * input:button ABC
 * output:movie custmer, movie avi to rent, return movie
 -------------------------------------------------------------------------------*/
#include <pololu/3pi.h>   /* allow use of 3pi robot functions */
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include "battery.h"
#include "RobotString.h"

int main(void)
{
  bat_check();

  static const char* const MovieNameList[MAXMOVIES] = {
    "Passengers", "La La Land", "Assasins Creed", "Sing",
    "Suicide Squad", "The Girl on the Train", "The Magnificient Seven",
    "Underworld: Blood Wars", "Fifty Shades Darker", "Moana", "Arrival"
  };

  Movie Movies[MAXMOVIES];
  for (unsigned int num = 0; num<MAXMOVIES; ++num) {
    RobotString temp;
    temp.SetStringArray(MovieNameList[num]);
    Movies[num].SetName(temp);
    Movies[num].SetNumber(num);
  }

  static const char* const UserNamesList[MAXUSERS] = {
    "E.Mou", "B.Evans", "B.Schweer", "R.Su", "K.Anderson", "K.Christensen", "M.Jacob", "H.Johnson"
  };
  RentalCustomer Users[MAXUSERS];
  for (unsigned int idx = 0; idx<MAXUSERS; ++idx) {
    RobotString temp;
    temp.SetStringArray(UserNamesList[idx]);
    Users[idx].SetName(temp);
    Users[idx].SetNumberRented(0);
  }
  bool rented[MAXMOVIES] = {false, false, false, false, false, false, false, false, false};

  /* Some useful strings for displaying status messages */
  RobotString rentedStringValue;
  rentedStringValue.SetStringArray("rented");
  RobotString sorryRentedValue;
  sorryRentedValue.SetStringArray("Sory;Ret");
  RobotString returnedMovieValue;
  returnedMovieValue.SetStringArray("returned");

  /* Welcome screen */
  print_two_lines("Welcome", "Mov rntl");
  delay_ms(300);
  int x;
  int custmernumber;
  int rentedmovie;
  int num=0;
   int someone=0;
  RentalCustomer *hadmovie[MAXUSERS];
    RentalCustomer person[MAXUSERS];
  while (1) {
    print_two_lines("A.Rent", "C.Return");
    // See documentation https://www.pololu.com/docs/0J18/9
    unsigned char button = wait_for_button_press(BUTTON_A | BUTTON_C);
    switch (button)
    {
      case BUTTON_A:
        custmernumber=getUserNumber(Users,MAXUSERS);
//debug one movie
        if(Users[custmernumber].GetNumberRented() !=0){
            print_two_lines("had"," a movie");

        }
            //set movie unavi, set the movie to the cust
        else {
            rentedmovie = getMovieNumber(Movies, MAXMOVIES, rented);
            rented[rentedmovie] = true;
            Users[custmernumber].SetNumberRented(1);
            Users[custmernumber].SetRentedMovie(Movies[rentedmovie]);
            print_two_lines("rented","this");
        }


        break;
      case BUTTON_C:
          // get the custmer has movie
          for(x=0;x<MAXUSERS;x++){
              if(Users[x].GetNumberRented()!=0){
                hadmovie[num]=&Users[x];//for change
                person[num]=Users[x];//for show in sceen
                  num++;
                  someone++;
              }

          }
            //if their is someone had rent movie
            if (someone!=0) {
                custmernumber = getUserNumber(person, num);
                rented[hadmovie[custmernumber]->GetRentedMovie().GetNumber()] = false;
                hadmovie[custmernumber]->SetNumberRented(0);
                print_two_lines("return", "movie");

            }
            //reset loop use to 0
            num=0;
            x=0;
            someone=0;
        break;
    }



  }
  return 0;
}


