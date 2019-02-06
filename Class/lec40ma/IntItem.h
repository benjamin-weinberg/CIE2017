//
// Created by Hans Johnson on 12/4/16.
//

#ifndef LEC41MA_INTITEM_H
#define LEC41MA_INTITEM_H

#include <iostream>
#include <string>
using namespace std;


// function to use IntItem class
void useIntItemClass();

// example class to represent an integer item with an associated name
class IntItem
{
public:
  // constructor
  IntItem(std::string name = "", int val = 0)
  {
    m_name = name;
    m_itemValue = val;
  }

  // data modification
  void setItemName(std::string name) { m_name = name; }
  void setItemValue(int val) { m_itemValue = val; }

  // data accessors
  std::string getItemName() const { return m_name; }
  int getItemValue() const { return m_itemValue; }

  // print
  void print() const;

private:
  std::string m_name;
  int m_itemValue;
};




#endif //LEC41MA_INTITEM_H
