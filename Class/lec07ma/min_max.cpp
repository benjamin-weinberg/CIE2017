/* Programmer: Ben Weinberg
*/
#include <iostream>
#include <stdio.h>
#include "min_max.h"

using namespace std;

/*TODO: Implement the obtainMinMax function*/
void obtainMinMax (float arr[], int n, float &maximum, float &minimum )
{
    maximum = arr[0];
    minimum = arr[0];
    float hold = arr[0];
    for (int i = 0; i <n;i++)
    {
        hold = arr[i];
        if (hold > maximum)
        {
            maximum = hold;
        }
        else if (hold < minimum)
        {
            minimum = hold;
        }
    }
}
