//
// Created by Chibuzo Nwakama on 4/18/17.
//

#include "PurchaseRecord.h"

const std::string & PurchaseRecord::getM_store() const
{
  return m_store;
}

int PurchaseRecord::getM_barcode() const
{
  return m_barcode;
}

void PurchaseRecord::setM_barcode(int m_barcode)
{
  PurchaseRecord::m_barcode = m_barcode;
}

PurchaseRecord::PurchaseRecord(const std::string & m_store, int m_barcode) : m_store(m_store), m_barcode(m_barcode)
{
}
