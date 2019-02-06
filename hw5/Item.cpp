//
// Created by Chibuzo Nwakama on 4/18/17.
//

#include "Item.h"

const std::string & Item::getM_name() const
{
  return m_name;
}

const std::string & Item::getM_description() const
{
  return m_description;
}

void Item::setM_description(const std::string & m_description)
{
  Item::m_description = m_description;
}

double Item::getM_price() const
{
  return m_price;
}

void Item::setM_price(double m_price)
{
  Item::m_price = m_price;
}

const HealthStatus & Item::getM_HealthStatus() const
{
  return m_HealthStatus;
}

void Item::setM_HealthStatus(const HealthStatus & m_HealthStatus)
{
  Item::m_HealthStatus = m_HealthStatus;
}

Item::Item(const std::string & m_name, const std::string & m_description, double m_price,
           const HealthStatus & m_HealthStatus) : m_name(m_name), m_description(m_description), m_price(m_price),
  m_HealthStatus(m_HealthStatus)
{
}
