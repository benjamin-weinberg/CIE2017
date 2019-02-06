#include <iostream>
#include <stdexcept>
#include "Time.cpp" // include definition of class Time from Time.h
using namespace std;

// displays a Time in 24-hour and 12-hour formats
static void displayTime(const string& message, const Time& time) {
   cout << message << "\nUniversal time: " << time.toUniversalString()
      << "\nStandard time: " << time.toStandardString() << "\n\n" << flush;
}

int main() {

  // TODO:  Set the time for the 3 time objects to represent
  //    a) The time of day that the CIE final exam starts
  Time finalExamStart;
  finalExamStart.setTime(12,30,00);
  displayTime("finalExamStart", finalExamStart);

  //    b) The time of day that the CIE final exam ends
  Time finalExamEnd;
  finalExamEnd.setTime(14,30,00);
  displayTime("finalExamEnd",finalExamEnd);

  //    c) The time of day that is 1 second before CIE lecture begins
  //
  Time lectureStart;
  lectureStart.setTime(12,29,59);
  displayTime("One second before lectureStart",lectureStart);

  // TODO: Change the minute and second of (c) to the actual start time
  lectureStart.setMinute(30);
  lectureStart.setSecond(0);
  displayTime("Actual lectureStart",lectureStart);


  // demonstate exception attempt to initialize t5 with invalid values
   try {
      Time t5;
      t5.setTime(27, 74, 99); // all bad values specified
   }
   catch (invalid_argument& e) {
      cerr << "Exception while initializing t5: " << e.what() << endl;
   }
}
