/*
 *
 * lec40ex Examples from lecture
 *
 */
#include <iostream>
using namespace std;

// returns maximum of integers value1,value2,value3
template < typename T >
T  maximum   ( T  value1,  T  value2,  T  value3)
{
  T  maximumVal{value1};
  if (value2 > maximumVal) {
    maximumVal = value2;
  }
  if (value3 > maximumVal) {
    maximumVal = value3;
  }
  return maximumVal;
}

// Specialization for the long data type
long maximum( long value1, long value2, long value3)
{
  return -10000 + value1 + value2 + value3; //This is an overloaded specialization!
}

static void useOfMaximumFunction()
{
  float a{-1.0},b{-2.0},c{-3.0};
  std::cout << "The maximum: " << maximum(a,b,c) << "." << std::endl;
  double d{100},e{200},f{300};
  std::cout << "The maximum: " << maximum(d,e,f) << "." << std::endl;
  char g{'x'},h{'y'},i{'z'};
  std::cout << "The maximum: " << maximum(g,h,i) << "." << std::endl;
  unsigned short j{16},k{4},l{9};
  std::cout << "The maximum: " << maximum(j,k,l) << "." << std::endl;

  long m{-101},n{-202},o{-303};
  std::cout << "The maximum: " << maximum(m,n,o) << "." << std::endl;

  string p{"Alfred"},q{"Mary"},r{"Oliver"};
  std::cout << "The maximum: " << maximum(p,q,r) << "." << std::endl;
}


int main()
{
  useOfMaximumFunction();
  return EXIT_SUCCESS;
}

