//
// Created by Hans Johnson on 10/6/16.
//

#include "LLNode.h"

#include <iostream>
#include <iomanip>
using namespace std;

void printAllLocationNamesAndRewards(AmazingRaceLocationPtr startingLocationPtr)
{
  /* option A: for loop */
  AmazingRaceLocationPtr currentPtr;
  for (currentPtr = startingLocationPtr; currentPtr != nullptr; currentPtr = currentPtr->getNextLocation())
  {
    cout << left << setw(36) << currentPtr->getLocationName() << "reward = " << fixed << "$" << setprecision(2) << setw(10)
         << right << currentPtr->getRewardAmount() << endl;
  }

  /* option B: equivalent while loop */

  currentPtr = startingLocationPtr;
  while (currentPtr != nullptr)
  {
      cout << left << setw(36) << currentPtr->getLocationName() << "reward = " << fixed << "$" << setprecision(2) << setw(10) <<
  right << currentPtr->getRewardAmount() << endl;
      currentPtr = currentPtr->getNextLocation();
  }
}


float computeTotalReward(AmazingRaceLocationPtr startingLocationPtr)
{
  float total = 0.0;
  currentPtr = startingLocationPtr;
  while (currentPtr != nullptr)
  {
    total += currentPtr->getRewardAmount();
    currentPtr = currentPtr->getNextLocation();
  }
  return total;
}


AmazingRaceLocationPtr getFirstAmazingRaceLocationPtrWithRewardLessThanKey(AmazingRaceLocationPtr startingLocationPtr,
                                                                           const float key)
{
  /* TODO OPTIONAL: YOUR CODE HERE */
  startingLocationPtr = nullptr; //<- remove this line
  return nullptr; /* return nullptr if nothing found */
}
