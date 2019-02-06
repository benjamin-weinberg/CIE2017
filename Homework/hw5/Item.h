//
// Created by Chibuzo Nwakama on 4/18/17.
//

#ifndef HOMEWORK5_ITEM_H
#define HOMEWORK5_ITEM_H
#include <string>
#include <map>
#include "HealthStatus.h"

class Item {
public:
    Item(const std::string &m_name, const std::string &m_description, double m_price,
         const HealthStatus &m_HealthStatus);

    const std::string &getM_name() const;

    const std::string &getM_description() const;

    void setM_description(const std::string &m_description);

    double getM_price() const;

    void setM_price(double m_price);

    const HealthStatus &getM_HealthStatus() const;

    void setM_HealthStatus(const HealthStatus &m_HealthStatus);

public:
private:
    const std::string m_name;
    std::string m_description;
    double m_price;
    HealthStatus m_HealthStatus;
};

typedef std::map<std::string,Item *> ItemMapType;
#endif //HOMEWORK5_ITEM_H
