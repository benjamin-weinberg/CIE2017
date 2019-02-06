//
// Created by Hans Johnson on 12/4/16.
//

#ifndef LEC40MA_MINMAX_FUNCTIONS_H
#define LEC40MA_MINMAX_FUNCTIONS_H


//----------------------------
// PART 1 FUNCTION PROTOTYPES
//----------------------------

// non-templated maximum function prototype for integers
extern int maximumInt(int a, int b, int c);
// non-templated minimum function prototype
extern int minimumInt(int a, int b, int c);


// templated maximum function prototype
// returns maximum of a, b, and c
template <typename T> T maximum(T a, T b, T c)
{
  T maximumVal = a;

  if (b > maximumVal) {
    maximumVal = b;
  }

  if (c > maximumVal) {
    maximumVal = c;
  }
  return maximumVal;
}

// TODO: your templated minimum function to go here
// templated minimum function prototype
// TODO: your function prototype here




#endif //LEC40MA_MINMAX_FUNCTIONS_H
