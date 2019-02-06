//
// Created by Hans Johnson on 9/12/16.
//

#include "computeCube.h"

const float cubeReductionSize = 1.1; //Number of cm to reduce each nested box size

float totalCubeVolume(const float largestSideLength){
  float volume =0;
  if (largestSideLength > cubeReductionSize)
  {
      volume = (largestSideLength*largestSideLength*largestSideLength) + totalCubeVolume(largestSideLength - cubeReductionSize);
      return volume;
  }
  else
  {
      volume = (largestSideLength*largestSideLength*largestSideLength);
      return volume;
  }
}