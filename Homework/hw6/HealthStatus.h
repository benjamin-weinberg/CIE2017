//
// Created by Johnson, Hans J on 4/2/17.
//

#ifndef HOMEWORK5_HEALTHSTATUS_H
#define HOMEWORK5_HEALTHSTATUS_H

#include <string>

using namespace std;

class HealthStatus {
public:
  HealthStatus(const double food, const double clothes, const double entertainment);

  HealthStatus(const HealthStatus& hs);

  double getFood() const;

  void setFood(double food);

  double getClothes() const;

  void setClothes(double clothes);

  double getEntertainment() const;

  void setEntertainment(double entertainment);

  void Print() const;

  string toString() const;


  // operator+=
  HealthStatus& operator+=(const HealthStatus& status)
  {
      HealthStatus newstatus(this->getFood()+status.getFood(), this->getClothes()+status.getClothes(), this->getEntertainment()+status.getEntertainment());
      return newstatus;
  }
  // operator-=
  HealthStatus& operator-=(const HealthStatus& status)
  {
      HealthStatus newstatus(this->getFood()-status.getFood(), this->getClothes()-status.getClothes(), this->getEntertainment()-status.getEntertainment());
      return newstatus;
  }
  // operator/=
  HealthStatus& operator/=(const HealthStatus& status)
  {
      HealthStatus newstatus(this->getFood()/status.getFood(), this->getClothes()/status.getClothes(), this->getEntertainment()/status.getEntertainment());
      return newstatus;
  }
  // operator*=
  HealthStatus& operator*=(const HealthStatus& status)
  {
      HealthStatus newstatus(this->getFood()*status.getFood(), this->getClothes()*status.getClothes(), this->getEntertainment()*status.getEntertainment());
      return newstatus;
  }
  // operator*
  HealthStatus& operator*(const HealthStatus&)const;
  // operator-
  HealthStatus& operator-(const HealthStatus&)const;
  // operator+
  HealthStatus& operator+(const HealthStatus&)const;
  // operator/
  HealthStatus& operator/(const HealthStatus&)const;
  // HINT: https://www.tutorialspoint.com/cplusplus/cpp_overloading.htm
  //       For this course keep it simple and do NOT be concerned about performance
  //       for these operators.
  // CAUTION:  The web has many examples for using advanced features (friend functions) that we
  //           did not cover in this course. Those friend functions allow for improved performance
  //           that we do not cover in this course.

private:
  double m_food;
  double m_clothes;
  double m_entertainment;
};

static const HealthStatus ZERO_HS(0, 0, 0);
#endif //HOMEWORK5_HEALTHSTATUS_H
