//
// Created by Hans Johnson on 12/4/16.
//

#ifndef LEC41MA_ITEM_H
#define LEC41MA_ITEM_H

#include <iostream>
#include <string>
using namespace std;

// function to use templated Item class
extern void useItemClass();

// example templated class to represent an item with an associated name
template <typename T> class Item
{
public:
  // constructor
  Item(std::string name = "", T val = 0)
  {
    m_name = name;
    m_itemValue = val;
  }

  // data modification
  void setItemName(std::string name) { m_name = name; }
  void setItemValue(T val) { m_itemValue = val; }

  // data accessors
  std::string getItemName() const { return m_name; }
  T getItemValue() const { return m_itemValue; }

  // print
  void print() const;

private:
  std::string m_name;
  T m_itemValue;
};

// implementation of print member function for Item class
template <typename T> void Item<T>::print() const
{
  std::cout << "Item:" << std::endl;
  std::cout << "Name: " << m_name << std::endl;
  std::cout << "Value: " << m_itemValue << std::endl;
}



#endif //LEC41MA_ITEM_H
