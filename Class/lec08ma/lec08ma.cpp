/*---------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: lec08ma.cpp
 * Description: This file contains the implementation of the
 *              mini-assignment.
 *
 *              0) In all cases below you must support "float", "double",
 *              and "unsigned int" data types.
 *
 *              1) Write family of functions that will compute the
 *              average of a set of numbers (between 1 and 4 values
 *              in the set).  The family of functions must print to
 *              the screen the average, and the data type used
 *              in the computation.
 *
 *              2) Write family of functions that will compute the
 *              product of a set of numbers (between 1 and 4 values
 *              in the set).  The family of functions must print to
 *              the screen the product, and the data type used
 *              in the computation.  (HINT:  Many fewer functions are
 *              needed if default parameters are properly used here)
 *
 *              3) Write family of functions that will compute the
 *              sum of a set of numbers (between 1 and 4 values
 *              in the set).  The family of functions must print to
 *              the screen the sum, and the data type used
 *              in the computation.  (HINT:  Many fewer functions are
 *              needed if default parameters are properly used here)
 ---------------------------------------------------------------*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "setmath.h"
using namespace std;

int main(void)
{
  const float f1=9.0f;
  const float f2=-7.0f;
  const float f3=7.0f;
  const float f4=-9.0f;

  //TODO: Print all summary values for float
  //Floating point computations:
  cout << "\nFloating point averages:" << endl;
  printTypeAndValue( average(f1) );
  printTypeAndValue( average(f1,f2) );
  printTypeAndValue( average(f1,f2,f3) );
  printTypeAndValue( average(f1,f2,f3,f4) );

  cout << "\nFloating point products:" << endl;
  printTypeAndValue( product(f1) );
  printTypeAndValue( product(f1,f2) );
  printTypeAndValue( product(f1,f2,f3) );
  printTypeAndValue( product(f1,f2,f3,f4) );

  cout << "\nFloating point sums:" << endl;
  printTypeAndValue( sum(f1) );
  printTypeAndValue( sum(f1,f2) );
  printTypeAndValue( sum(f1,f2,f3) );
  printTypeAndValue( sum(f1,f2,f3,f4) );


  //TODO: Print all summary values for double as was demonstrated for float
  const double d1=99.0;
  const double d2=77.3;
  const double d3=44.1;
  const double d4=33.9;

  cout << "\nDouble averages:" << endl;
  printTypeAndValue( average(d1) );
  printTypeAndValue( average(d1,d2) );
  printTypeAndValue( average(d1,d2,d3) );
  printTypeAndValue( average(d1,d2,d3,d4) );

  cout << "\nDouble products:" << endl;
  printTypeAndValue( product(d1) );
  printTypeAndValue( product(d1,d2) );
  printTypeAndValue( product(d1,d2,d3) );
  printTypeAndValue( product(d1,d2,d3,d4) );

  cout << "\nDouble sums:" << endl;
  printTypeAndValue( sum(d1) );
  printTypeAndValue( sum(d1,d2) );
  printTypeAndValue( sum(d1,d2,d3) );
  printTypeAndValue( sum(d1,d2,d3,d4) );

  //TODO: Print all summary values of int as was demonstrated for float
  const int i1=16;
  const int i2=32;
  const int i3=64;
  const int i4=128;


  cout << "\nInt averages:" << endl;
  printTypeAndValue( average(i1) );
  printTypeAndValue( average(i1,i2) );
  printTypeAndValue( average(i1,i2,i3) );
  printTypeAndValue( average(i1,i2,i3,i4) );

  cout << "\nInt products:" << endl;
  printTypeAndValue( product(i1) );
  printTypeAndValue( product(i1,i2) );
  printTypeAndValue( product(i1,i2,i3) );
  printTypeAndValue( product(i1,i2,i3,i4) );

  cout << "\nInt sums:" << endl;
  printTypeAndValue( sum(i1) );
  printTypeAndValue( sum(i1,i2) );
  printTypeAndValue( sum(i1,i2,i3) );
  printTypeAndValue( sum(i1,i2,i3,i4) );

  return EXIT_SUCCESS; /* like return 0; */
}


