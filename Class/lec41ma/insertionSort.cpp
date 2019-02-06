#include "insertionSort.h"


void sort_array(UINT *arr, const size_t arr_size)
{
  int key = arr[0];
  int i;
  for (int j = 1; j<arr_size-1; j++)
  {
    key = arr[j];
    i = j-1;
    while(i>=0 && arr[i]>key)
    {
      arr[i+1] = arr[i];
      i--;
    }
    arr[i+1]=key;
  }
}
