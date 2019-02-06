//-----------------------------------------------------------------------------
// Programmer: Ben Weinberg

// Description: This file contains examples and the mini-assignment associated
//              with on function templates
//
// Mini-assignment
//
// 1. Examine the function "maximumInt" in minmax_functions.cpp and the example
//    use of this function in "useOfMaximumIntFunction." This function does
//    NOT use templates and so it only works with integers.
// 2. Examine a similar function "maximum" that DOES use templates and its usage
//    in "useOfMaximumFunction." Because of the use of templates, different versions
//    of the function are created automatically, as needed, by the compiler.
// 3. Examine the function "minimumInt" and the example use of this function in
//    "useOfMinimumIntFunction." This function does NOT use templates and so it
//     only works with integers.
// 4. CREATE A TEMPLATED VERSION OF THIS FUNCTION NAMED "minimum" in minmax_functions.h
// 5. CREATE A TEMPLATED FUNCTION NAMED "average3" to average 3 numeric values together
// 6. ILLUSTRATE USING YOUR TEMPLATED minimum function with at least two different
//    types in the function "miniAssignmentPart1"
// 7. ILLUSTRATE USING YOUR TEMPLATED average3 function with at least two different
//    numeric types
//
//-----------------------------------------------------------------------------
#include <iostream>
using namespace std;

#include "minmax_functions.h"


static void useOfMaximumIntFunction()
{
  int a, b, c;
  std::cout << "Please enter three integers: ";
  std::cin >> a >> b >> c;
  std::cout << "The maximum integer entered was " << maximumInt(a, b, c) << std::endl;
}

// calls function above
static void useOfMaximumFunction()
{
  float f1, f2, f3;
  std::cout << "Please enter three floats: ";
  std::cin >> f1 >> f2 >> f3;
  std::cout << "The maximum float entered was " << maximum(f1, f2, f3) << "." << std::endl;

  int i1, i2, i3;
  std::cout << "Please enter three integers: ";
  std::cin >> i1 >> i2 >> i3;
  std::cout << "The maximum integer entered was " << maximum(i1, i2, i3) << "." << std::endl;
}

// calls function above
static void useOfMinimumIntFunction()
{
  int a, b, c;
  std::cout << "Please enter three integers: ";
  std::cin >> a >> b >> c;
  std::cout << "The minimum integer entered was " << minimumInt(a, b, c) << "." << std::endl;
}

// calls your templated function above
static void miniAssignmentPart1()
{
  // TODO: call your templated minimum function at least twice (using two different types)
  std::cout << "TODO" << std::endl;
}


//------
// MAIN
//------
int main()
{
  std::cout << "-------------------------" << std::endl;
  std::cout << "useOfMaximumIntFunction()" << std::endl;
  std::cout << "-------------------------" << std::endl;
  useOfMaximumIntFunction();

  std::cout << std::endl;
  std::cout << "----------------------" << std::endl;
  std::cout << "useOfMaximumFunction()" << std::endl;
  std::cout << "----------------------" << std::endl;
  useOfMaximumFunction();

  std::cout << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "miniAssignmentPart1()" << std::endl;
  std::cout << "---------------------" << std::endl;
  miniAssignmentPart1();

  return 0;
}

