//
// Created by Chibuzo Nwakama on 4/18/17.
//

#include "Store.h"
#include "HealthStatus.h"

Store::Store(const std::string & m_name, const HealthStatus & m_qualityMultiplier,
             const StoreInventoryItemMapType & m_Inventory) : m_name(m_name), m_qualityMultiplier(m_qualityMultiplier),
  m_Inventory(m_Inventory)
{
}

const std::string & Store::getM_name() const
{
  return m_name;
}

const HealthStatus & Store::getM_qualityMultiplier() const
{
  return m_qualityMultiplier;
}

const StoreInventoryItemMapType & Store::getM_Inventory() const
{
  return m_Inventory;
}

void Store::addInventoryItem(const std::string & storeItemName, const double & storeItemBarcode)
{
  StoreInventoryItem * s = new StoreInventoryItem(storeItemName, storeItemBarcode);

  m_Inventory[storeItemBarcode] = s;
}

Store::~Store()
{
  for( auto inventory : m_Inventory )
    {
    delete  inventory.second;
    }
}
