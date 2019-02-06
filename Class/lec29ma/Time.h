// Time class containing a constructor with default arguments.
// Member functions defined in Time.cpp.
#include <string>

// prevent multiple inclusions of header
#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
public:
   // set functions
   void setTime(int, int, int); // set hour, minute, second

  // TODO: Add mutator/query methods (i.e. getters & setters) with
  //       for hour/minute/second. Use proper “const correctness”,
  //       validation with exception throwing
   void setHour(int);
   void setMinute(int);
   void setSecond(int);

   // get functions
   int getHour() const;
   int getMinute() const;
   int getSecond() const;

   std::string toUniversalString() const; // 24-hour time format string
   std::string toStandardString() const; // 12-hour time format string
private:
   unsigned int hour{0}; // 0 - 23 (24-hour clock format)
   unsigned int minute{0}; // 0 - 59
   unsigned int second{0}; // 0 - 59
};

#endif
