// Member-function definitions for class Time.
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include <string>
#include "Time.h" // include definition of class Time from Time.h

using namespace std;

// set new Time value using universal time
void Time::setTime(int h, int m, int s) {
  setHour(h);   // set private field hour
  setMinute(m); // set private field minute
  setSecond(s); // set private field second
}

// TODO: set hour value
void Time::setHour(const int h) {
    if (h >= 0 && h < 24) {
        hour = h;
    }
    else
    {
        throw invalid_argument("hour was out of range");
    }
}

// TODO: set minute value
void Time::setMinute(const int m){
    if (m >= 0 && m < 60) {
        minute = m;
    }
    else
    {
        throw invalid_argument("minute was out of range");
    }
}

// TODO: set second value
void Time::setSecond(const int s){
    if (s >= 0 && s < 60) {
        second = s;
    }
    else
    {
        throw invalid_argument("second was out of range");
    }
}

// TODO: return hour value
int Time::getHour() const{
    return hour;
}

// TODO: return minute value
int Time::getMinute() const{
    return minute;
}

// TODO: return second value
int Time::getSecond() const{
    return second;
}


// return Time as a string in universal-time format (HH:MM:SS)
string Time::toUniversalString() const {
  ostringstream output;
  output << setfill('0') << setw(2) << getHour() << ":"
         << setw(2) << getMinute() << ":" << setw(2) << getSecond();
  return output.str();
}

// return Time as string in standard-time format (HH:MM:SS AM or PM)
string Time::toStandardString() const {
  ostringstream output;
  output << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
         << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
         << getSecond() << (hour < 12 ? " AM" : " PM");
  return output.str();
}
