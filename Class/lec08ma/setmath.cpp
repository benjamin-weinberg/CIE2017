/* Programmer: Ben Weinberg
*/
#include <iostream>
#include <stdio.h>
#include "setmath.h"

using namespace std;

void printTypeAndValue(const float value){
  cout << "float data type: " << value << endl;
}

void printTypeAndValue(const double value){
  cout << "double data type: " << value << endl;
}

void printTypeAndValue(const int value){
  cout << "int data type: " << value << endl;
}



/*TODO: Implement the set summary functions for float, double, and int data types*/
float average(const float x1, const float x2, const float x3, const float x4)
{
  //TODO:  FIX THE BEHAVIOR OF THIS FUNCTION
  return sum(x1,x2,x3,x4)/4.0f;
}
float average(const float x1, const float x2, const float x3)
{
    return sum(x1,x2,x3)/3.0f;
}
float average(const float x1, const float x2)
{
    return sum(x1,x2)/2.0f;
}
float average(const float x1)
{
    return x1;
}


double average(const double x1, const double x2, const double x3, const double x4)
{
    return sum(x1,x2,x3,x4)/4.0;
}
double average(const double x1, const double x2, const double x3)
{
    return sum(x1,x2,x3)/3.0;
}
double average(const double x1, const double x2)
{
    return sum(x1,x2)/2.0;
}
double average(const double x1)
{
    return x1;
}


int average(const int x1, const int x2, const int x3, const int x4)
{
    return sum(x1,x2,x3,x4)/4;
}
int average(const int x1, const int x2, const int x3)
{
    return sum(x1,x2,x3)/3;
}
int average(const int x1, const int x2)
{
    return sum(x1,x2)/2;
}
int average(const int x1)
{
    return x1;
}

extern float sum(const float x1, const float x2, const float x3, const float x4)
{
    float total = 0;
    total = x1+x2+x3+x4;
    return total;
}
extern float product(const float x1, const float x2, const float x3, const float x4)
{
    float total = 0;
    total = x1*x2*x3*x4;
    return total;
}


extern double sum(const double x1, const double x2, const double x3, const double x4)
{
    double total = 0;
    total = x1+x2+x3+x4;
    return total;
}
extern double product(const double x1, const double x2, const double x3, const double x4)
{
    double total = 0;
    total = x1*x2*x3*x4;
    return total;
}


extern int sum(const int x1, const int x2, const int x3, const int x4)
{
    int total = 0;
    total = x1+x2+x3+x4;
    return total;
}
extern int product(const int x1, const int x2, const int x3, const int x4)
{
    int total = 0;
    total = x1*x2*x3*x4;
    return total;
}



