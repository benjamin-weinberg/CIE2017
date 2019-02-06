/*---------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: lec10ma.cpp
 * Description: This file contains the implementation of the
 *              mini-assignment associated with lecture 10.
 ---------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "min_max.h"
using namespace std;

int main(void)
{

  const size_t NumArrayElements = 10;

  float myArray[NumArrayElements] = {5.4, 3.2, 2.1, 1.0, 8.3, 7.5, 4.2, 2.4, 3.9, 5.0};

  /* TODO: Declare the min/max variables to hold the return values */

  float minimum = 0;
  float maximum = 0;

  /* TODO: Call the obtainMinMax function using myArray, NumArrayElements, and the min/max variables you declared */



  obtainMinMax(myArray, NumArrayElements, maximum, minimum);
  cout << "Determined minimum and maximum using pass-by-reference function:" << endl;

  /* TODO: Print the minimum and maximum value */
  cout << "The minimum of the array is: " << minimum << endl << "The maximum of the array is: " << maximum;

  return EXIT_SUCCESS; /* like return 0; */
}


