/*-----------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Description: A program to sort a number of integers and display the median value.
 *              For the mini-assignment, you must complete the implementation
 *              of the sort_array function to sort an input array using
 *              insertion sort.
 ----------------------------------------------------------------------------*/
#include <iostream>
#include <stdlib.h>
#include <string.h> /* for string functions */
#include <ctype.h>  /* for islower and toupper */

#include "insertionSort.h"

using namespace std;

int main(void)
{
  const size_t ARRAY_SIZE=11;
  unsigned int readings[ARRAY_SIZE] = {250, 192, 191, 220, 230, 190, 95, 115, 140, 200, 105};

  cout << "Initial Array: ";
  for( size_t i = 0; i < ARRAY_SIZE; ++i )
    {
    cout << readings[i] << " ";
    }
  cout << endl;

  sort_array(readings, ARRAY_SIZE);
  unsigned int medianReading = readings[ARRAY_SIZE/2];

  cout << "Sorted Array: ";
  for( size_t i = 0; i < ARRAY_SIZE; ++i )
    {
    cout << readings[i] << " ";
    }
  cout << endl;
  cout << "Median: " << medianReading << endl;

  return 0;
}
