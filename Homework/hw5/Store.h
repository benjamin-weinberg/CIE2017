//
// Created by Chibuzo Nwakama on 4/18/17.
//

#ifndef HOMEWORK5_STORE_H
#define HOMEWORK5_STORE_H
#include <string>
#include "HealthStatus.h"
#include <map>
#include "StoreInventoryItem.h"

class Store {
public:
    Store(const std::string &m_name, const HealthStatus &m_qualityMultiplier,
          const StoreInventoryItemMapType &m_Inventory);

    const std::string &getM_name() const;

    const HealthStatus &getM_qualityMultiplier() const;

    const StoreInventoryItemMapType &getM_Inventory() const;

    void addInventoryItem(const std::string & storeItemName, const double & storeItemBarcode);


public:
private:
    const std::string m_name;
    HealthStatus m_qualityMultiplier;
    StoreInventoryItemMapType m_Inventory;
};

typedef std::map<std::string,Store *> StoreMapType;
#endif //HOMEWORK5_STORE_H
