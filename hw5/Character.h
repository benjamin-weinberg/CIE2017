//
// Created by Chibuzo Nwakama on 4/18/17.
//

#ifndef HOMEWORK5_CHARACTER_H
#define HOMEWORK5_CHARACTER_H


#include <string>
#include <map>
#include "HealthStatus.h"
#include "PurchaseRecord.h"
#include <string>

class Character {
public:
    Character(const std::string &m_name, const std::string &m_home, const HealthStatus &m_HealthStatus,
              const PurchaseRecordVectorType &m_purchase_list);

    const std::string &getM_name() const;

    const std::string &getM_home() const;

    void setM_home(const std::string &m_home);

    const HealthStatus &getM_HealthStatus() const;

    void setM_HealthStatus(const HealthStatus &m_HealthStatus);

    const PurchaseRecordVectorType &getM_purchase_list() const;

    void setM_purchase_list(const PurchaseRecordVectorType &m_purchase_list);

public:
private:
    const std::string m_name;
    std::string m_home;
    HealthStatus m_HealthStatus;
    PurchaseRecordVectorType m_purchase_list;
};

typedef std::map<std::string,Character *> CharacterMapType;

#endif //HOMEWORK5_CHARACTER_H
