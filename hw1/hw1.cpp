/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: hw1.cpp
 * Description:
    This program impliments a movie rental system in c++. 
    The program will keep running until a 4 is entered and
    most (if not all) data inputs are validated.
  -------------------------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <string>
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include "helperfunctions.cpp"

using namespace std;


int main(void )
{
    // Main variables
    int choice =0;
    int userChoice=0;
    int movieChoice=0;
    int movieRented = -1;
    /* Create Movie object and initialize */
    int numMovies=11;
    Movie movies[numMovies];
    string movieNames[numMovies] = {"Passengers","La La Land","Assassin\'s Creed","Sing","Suicide Squad","The Girl on the Train","The Magnificent Seven","Underworld: Blood Wars","Fifty Shades Darker","Moana","Arrival"};

    for (int i=0;i<numMovies;i++)
    {
        movies[i].SetName(movieNames[i]);
        movies[i].SetNumber(i);
        movies[i].SetRentedStatus(false);
    }
   /* Create RentalCustomer object and initialize */

    int numUsers=8;
    RentalCustomer users[numUsers];
    string userNames[numUsers] = {"Elaine Mou","Bradley Evans","Brian Schweer","Richard Su","Kyle Anderson","Kyle Christensen","Mathews Jacob","Hans Johnson"};


    for (int i=0;i<numUsers;i++)
    {
        users[i].SetName(userNames[i]);
        users[i].SetNumberRented(-1);
    }


    cout << "Welcome to the move rental system!" << endl;

    //MAIN MENU
    cout << "=============================================" <<endl
         << "#                Main Menu:                 #" <<endl
         << "=============================================" <<endl
         << "Please enter the number of the action you would like to preform: "<<endl << endl
         << "1) List status" << endl
         << "2) Return a Movie "<<endl
         << "3) Rent a Movie" << endl
         << "4) Exit program"<<endl<<endl
         << "Choice(1-4) : ";
    cin >> choice;
    cout << endl << endl;

    //Main loop   (do stuff when you don't want to exit)
    while (choice !=4)
    {
        switch (choice)
        {
            //STATUS LIST CHOICE
            case 1:
                cout << "============================================="<<endl
                     << "                   Status                    "<<endl
                     << "============================================="<<endl<<endl
                     << "Users and movies rented:" << endl
                     << "--------------------" <<endl;
                //print all current user's names and movies they have rented
                for (int i=0;i<numUsers;i++)
                {
                    printRentalCustomer(users[i]);
                }
                //only print movies that are available for rent, if currently rented do not display
                cout << endl<< "Movies available for rent: " <<endl<<endl;
                for (int i=0;i<numMovies;i++)
                {
                    if (movies[i].GetRentedStatus() == false)
                    {
                        printMovie(movies[i]);
                    }
                }
                cout << endl<<endl<<endl;
                // go back to main menu
                break;
            // RETURN A MOVIE CHOICE
            case 2:
                cout << "============================================="<<endl
                     << "               Return a movie                "<<endl
                     << "============================================="<<endl<<endl
                     << "Enter the customer number from following list (1-" << numUsers <<") to return the movie they have rented" << endl<<endl;
                //print users that can rent a movie
                for (int i=0;i<numUsers;i++)
                {
                    cout << i+1 << ": " << users[i].GetName() << endl;
                }
                //ask for a user number
                cout << endl<< "User number: ";
                cin >> userChoice;
                //vaidate input. If invalid, ask for another choice and print error message
                while((userChoice <1) || (userChoice>numUsers))
                {
                    cout << "Invalid customer number! Please enter a customer number between 1 and "<<numUsers<< endl<< "User number: ";
                    cin >> userChoice;
                }
                //convert input into actual user number
                userChoice -= 1;
                //insure user has a movie currently rented
                if (users[userChoice].GetNumberRented() != -1)
                {
                    //reset(return) the movie that was rented
                    movieRented = users[userChoice].GetNumberRented();
                    users[userChoice].SetNumberRented(-1);
                    movies[movieRented].SetRentedStatus(false);
                    //display confirmation message
                    cout <<endl<< "Movie returned!" << endl<<endl<<endl;
                }
                //display error if no movie is currently rented
                else
                {
                    cout << endl << "ERROR: User has no movie currently rented!"<<endl<<endl<<endl;
                }
                //go back to main menu
                break;
            case 3:
                cout << "============================================="<<endl
                     << "                Rent a movie                 "<<endl
                     << "============================================="<<endl<<endl
                     << "Enter the customer number from following list (1-" << numUsers <<") to rent a movie to them" << endl<<endl;
                //print users that can rent a movie
                for (int i=0;i<numUsers;i++)
                {
                    cout << i+1 << ": " << users[i].GetName() << endl;
                }
                //ask for a user number
                cout << endl<< "User number: ";
                cin >> userChoice;
                //vaidate input. If invalid, ask for another choice and print error message
                while((userChoice <1) || (userChoice>numUsers))
                {
                    cout << "Invalid customer number! Please enter a customer number between 1 and "<<numUsers<< endl<< "User number: ";
                    cin >> userChoice;
                }
                //convert input into actual user number
                userChoice -= 1;
                //insure user does not have a movie currently rented
                if (users[userChoice].GetNumberRented() == -1)
                {
                    cout <<endl<<endl<< "Enter the movie number from following list (1-" << numMovies <<") to rent that movie" << endl
                         <<"Movies currently available for rent: " <<endl;
                    //print users that can rent a movie
                    for (int i=0;i<numMovies;i++)
                    {
                        if (movies[i].GetRentedStatus() == false)
                        {
                            cout << (movies[i].GetNumber()) +1 << ": " << movies[i].GetName() << endl;
                        }
                    }
                    //ask for a movie number
                    cout << endl<< "Move number: ";
                    cin >> movieChoice;
                    //vaidate input. If invalid, ask for another choice and print error message
                    while((movieChoice <1) || (movieChoice>numMovies))
                    {
                        cout << "Invalid customer number! Please enter a customer number between 1 and "<<numUsers<< endl<< "User number: ";
                        cin >> movieChoice;
                    }
                    movieChoice -=1;
                    //insure the movie choice is not rented
                    if (movies[movieChoice].GetRentedStatus() == false)
                    {
                        movies[movieChoice].SetRentedStatus(true);
                        users[userChoice].SetNumberRented(movieChoice);
                        users[userChoice].SetRentedMovie(movies[movieChoice]);
                        
                        cout << endl<< "User " <<users[userChoice].GetName() << " has rented the movie: " << movies[movieChoice].GetName() <<endl<<endl;

                    }
                    //if the movie choice is currently rented out return an error message
                    else
                    {
                        cout << endl<< "ERROR: movie is already rented out!" <<endl<< endl<<endl;
                    }
                }
                //if the user does have a movie currently
                else
                {
                    cout << endl << "ERROR: user already has a movie rented to them!" << endl<<endl<<endl;
                }

                break;
            default:
                cout << "Invalid choice, please pick again!" << endl<<endl;
                break;
        }
        //get new input (main menu)
        cout << "=============================================" <<endl
             << "#                Main Menu:                 #" <<endl
             << "=============================================" <<endl
             << "Please enter the number of the action you would like to preform: "<<endl << endl
             << "1) List status" << endl
             << "2) Return a Movie "<<endl
             << "3) Rent a Movie" << endl
             << "4) Exit program"<<endl<<endl
             << "Choice(1-4) : ";
        cin >> choice;
        cout << endl << endl;
    }

    cout << "Thank you for using my program, have a great day!" << endl;
}
