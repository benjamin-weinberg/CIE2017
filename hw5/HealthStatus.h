//
// Created by Chibuzo Nwakama on 4/18/17.
//

#ifndef HOMEWORK5_HEALTHSTATUS_H
#define HOMEWORK5_HEALTHSTATUS_H
#include <string>


class HealthStatus {
public:
    HealthStatus(double m_food, double m_clothes, double m_entertainment);

    double getM_food() const;

    void setM_food(double m_food);

    double getM_clothes() const;

    void setM_clothes(double m_clothes);

    double getM_entertainment() const;

    void setM_entertainment(double m_entertainment);

    std::string toString() const;

private:
    double m_food;
    double m_clothes;
    double m_entertainment;
};


#endif //HOMEWORK5_HEALTHSTATUS_H
