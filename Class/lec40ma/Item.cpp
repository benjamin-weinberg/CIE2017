//
// Created by Hans Johnson on 12/4/16.
//

#include "Item.h"


void useItemClass()
{
  Item<int> myItem1("Course", 57017);
  Item<float> myItem2("pi", 3.14);
  Item<std::string> myItem3("Favorite class", "CIE");

  myItem1.print();
  myItem2.print();
  myItem3.print();
}
