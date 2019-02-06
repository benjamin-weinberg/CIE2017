//
// Created by Hans Johnson on 12/4/16.
//

#include "StudentFloat.h"


void StudentFloat::print() const
{
  std::cout << "Student:" << std::endl;
  std::cout << "First name: " << m_firstName << std::endl;
  std::cout << "Last name: " << m_lastName << std::endl;
  std::cout << "Associated data item: " << m_dataItem << std::endl;
}

void useStudentFloatClass()
{
  StudentFloat dog1("Teddy", "Garvin", 90.5);
  StudentFloat dog2("JT", "Garvin", 78.2);
  dog1.print();
  dog2.print();
}