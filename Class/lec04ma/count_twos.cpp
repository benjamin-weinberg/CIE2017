/*-------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: count_twos.cpp
 * Description: this program reads a sequence of integers (entered one at a time), keeping track of the number
 * of times a 2 is entered. The program will EITHER
 *    (a) Accept enter 10 number or integers OR
 *    (b) Keep on accepting integers until the user enters a -1 (optional)
 *  Once the sequence has been entered by the user, the total number of 2's will be printed.
 -------------------------------------------------------------------------*/
#include "count_twos.h"

#include <iostream>
using namespace std;

void count_twos()
{  
  int number2s = 0;
  int userNumber = 0;

  cout << "Please enter sequence of integers and enter -1 to cout the total: " << endl;

  cin >> userNumber;

  while (userNumber != -1)
  {
    if (userNumber == 2)
    {
      number2s++;
    }
    cin >> userNumber;
  }

  cout << "The total number of 2's entered was " << number2s << endl;
}
