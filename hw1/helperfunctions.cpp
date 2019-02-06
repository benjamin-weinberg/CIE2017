/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Description: These functions are to help the main program with simple tasks
    like printing the user and movie statuses
 -------------------------------------------------------------------------------*/

#include <stdio.h>
#include "Movie.h"
#include "RentalCustomer.h"
#include "helperfunctions.h"
#include <string>
#include <iostream>

using namespace std;

/* Function to print user details */

void printRentalCustomer(const RentalCustomer & User)
{
    cout << "Name: " << User.GetName() << endl;
    if( User.GetNumberRented() != -1 )
    {
        printMovie(User.GetRentedMovie() );
    }
    else
    {
        cout << "No movies rented" << endl;
    }
    cout << "--------------------" << endl;
}

/* Function to print details of the movie */

void printMovie(const Movie & movie)
{
    cout << (movie.GetNumber()) + 1 << ". " << movie.GetName() << endl;
}

/* Add additional helper functions here */





