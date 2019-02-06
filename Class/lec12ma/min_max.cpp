/* Programmer: Ben Weinberg
*/
#include <iostream>
#include <stdio.h>
#include "min_max.h"

using namespace std;

float obtainMin(float arr[], const int n)
{
  float minValue = arr[0];
  for (int i=0;i<n;i++)
  {
      if (arr[i] < minValue)
      {
          minValue = arr[i];
      }
  }
  return minValue;
}

float obtainMax(float arr[], const int n)
{
  float maxValue = arr[0];
  for (int i=0;i<n;i++)
  {
      if (arr[i] > maxValue)
      {
          maxValue = arr[i];
      }
  }
  return maxValue;
}
