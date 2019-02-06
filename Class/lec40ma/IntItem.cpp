//
// Created by Hans Johnson on 12/4/16.
//

#include "IntItem.h"


void useIntItemClass()
{
  IntItem myItem1("January", 31);
  IntItem myItem2("February", 28);

  myItem1.print();
  myItem2.print();
}



// implementation of print member function for IntItem class
void IntItem::print() const
{
  std::cout << "IntItem:" << std::endl;
  std::cout << "Name: " << m_name << std::endl;
  std::cout << "Value: " << m_itemValue << std::endl;
}