//
// Created by Chibuzo Nwakama on 4/18/17.
//

#include "StoreInventoryItem.h"

StoreInventoryItem::StoreInventoryItem(const std::string & m_name, unsigned int m_barcode) : m_name(m_name),
  m_barcode(m_barcode)
{
}

const std::string & StoreInventoryItem::getM_name() const
{
  return m_name;
}

unsigned int StoreInventoryItem::getM_barcode() const
{
  return m_barcode;
}

void StoreInventoryItem::setM_barcode(unsigned int m_barcode)
{
  StoreInventoryItem::m_barcode = m_barcode;
}
