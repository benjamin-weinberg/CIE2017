//-----------------------------------------------------------------------------
// Programmer: TODO: Your name here
// Description: This file contains examples and the mini-assignment associated
//              with class templates
//
// Mini-assignment
//
// Templates Part 2:
// 1. Examine the class named IntItem and the example use of this class in the
//    "useIntItemClass" function. This class does NOT use templates and thus you
//    may only create objects that contain an integer value.
// 2. Examine a similar class named Item and the example use of this class in the
//    "useItemClass" function. Because of the use of templates, different versions
//    of the class are created automatically, as needed, by the compiler.
// 3. Examine the class named StudentFloat and the example use of this class in the
//    "useStudentFloatClass" function.
// 4. CREATE A TEMPLATED VERSION OF THIS CLASS NAMED Student (SO THAT THE
//    TYPE OF m_dataItem ASSOCIATED WITH THE STUDENT MAY VARY)
// 5. ILLUSTRATE USING THIS CLASS WITH AT LEAST TWO DIFFERENT TYPES IN THE
//    FUNCTION "miniAssignmentPart2"
//-----------------------------------------------------------------------------
#include <iostream>
#include "IntItem.h"
#include "Item.h"
#include "StudentFloat.h"
#include "Student.h"

using namespace std;


// test function to test your templated Student class
void miniAssignmentPart2()
{
  // TODO: create at least two objects of your templated Studunt class,
  // each with a different data item type
  // Then call the print member function for each object.
  std::cout << "TODO" << std::endl;
}

//------
// MAIN
//------
int main()
{
  std::cout << std::endl;
  std::cout << "-----------------" << std::endl;
  std::cout << "useIntItemCLass()" << std::endl;
  std::cout << "-----------------" << std::endl;
  useIntItemClass();

  std::cout << std::endl;
  std::cout << "--------------" << std::endl;
  std::cout << "useItemCLass()" << std::endl;
  std::cout << "--------------" << std::endl;
  useItemClass();

  std::cout << std::endl;
  std::cout << "----------------------" << std::endl;
  std::cout << "useStudentFloatCLass()" << std::endl;
  std::cout << "----------------------" << std::endl;
  useStudentFloatClass();

  std::cout << std::endl;
  std::cout << "---------------------" << std::endl;
  std::cout << "miniAssignmentPart2()" << std::endl;
  std::cout << "---------------------" << std::endl;
  miniAssignmentPart2();

  return 0;
}

