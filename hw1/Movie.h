/*------------------------------------------------------------------------------
 * Programmer: Ben Weinberg
 * Name: Movie.h
 * Description: This file contains the class definition for Movie
 -------------------------------------------------------------------------------*/
#ifndef MOVIE_H
#define MOVIE_H
#include <string>

using namespace std;

class Movie
{
public:

  const string & GetName() const
  {
    return m_Name;
  }

  void SetName(const string & name)
  {
    m_Name = name;
  }

  int GetNumber() const
  {
    return m_Number;
  }

  void SetNumber(int number)
  {
    m_Number = number;
  }

  bool GetRentedStatus()
  {
    return m_Rented;
  }

  bool SetRentedStatus(bool rent)
  {
    m_Rented = rent;
  }

private:
  string m_Name;
  int    m_Number;
  bool   m_Rented;
};

#endif // MOVIE_H
