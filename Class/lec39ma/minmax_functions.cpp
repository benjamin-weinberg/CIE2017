//
// Created by Hans Johnson on 12/4/16.
//

#include "minmax_functions.h"

// returns maximum of integers a, b, and c
int maximumInt(int a, int b, int c)
{
  int maximumVal = a;

  if (b > maximumVal) {
    maximumVal = b;
  }

  if (c > maximumVal) {
    maximumVal = c;
  }

  return maximumVal;
}


// returns minimum of integers a, b, and c
int minimumInt(int a, int b, int c)
{
  int minimumVal = a;

  if (b < minimumVal) {
    minimumVal = b;
  }

  if (c < minimumVal) {
    minimumVal = c;
  }

  return minimumVal;
}