//
// Created by Hans Johnson on 12/4/16.
//

#ifndef LEC41MA_STUDENTFLOAT_H
#define LEC41MA_STUDENTFLOAT_H

#include <iostream>
#include <string>
using namespace std;

// example class to represent student with a first name, last name,
// and associated data item
class StudentFloat
{
public:
  // constructor
  StudentFloat(std::string first = "", std::string last = "", float dataItem = 0.0)
  {
    m_firstName = first;
    m_lastName = last;
    m_dataItem = dataItem;
  }

  // data modification
  void setFirstName(std::string first) { m_firstName = first; }
  void setLastName(std::string last) { m_lastName = last; }
  void setDataItem(float dataItem) { m_dataItem = dataItem; }

  // data accessors
  std::string getFirstName() const { return m_firstName; }
  std::string getLastName() const { return m_lastName; }
  float getDataItem() const { return m_dataItem; }

  // implementation of print function
  void print() const;

private:
  std::string m_firstName;
  std::string m_lastName;
  float m_dataItem;
};



// function to use StudentFloat class
extern void useStudentFloatClass();

#endif //LEC41MA_STUDENTFLOAT_H
