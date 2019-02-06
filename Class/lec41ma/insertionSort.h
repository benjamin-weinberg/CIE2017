#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <cstddef>
typedef unsigned int UINT;

/*-----------------------------------------------------------------------------
 * Programmer: YOUR NAMES HERE
 * Function name: sort_array
 * Description: This sorts the input array arr so the elements will be in
 *              ascending order (i.e., from 'smallest' to 'largest').
 *              The array is sorted using insertion sort.
 * Inputs: arr = unsigned int * = input array
 *         arr_size = integer = number of elements in the input array
 ----------------------------------------------------------------------------*/
/* function prototype for function to sort array using insertion sort */
extern void sort_array(UINT * arr, const size_t arr_size);

#endif //INSERTIONSORT_H
