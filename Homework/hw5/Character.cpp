//
// Created by Chibuzo Nwakama on 4/18/17.
//

#include "Character.h"

const std::string & Character::getM_name() const
{
  return m_name;
}

Character::Character(const std::string & m_name, const std::string & m_home, const HealthStatus & m_HealthStatus,
                     const PurchaseRecordVectorType & m_purchase_list) : m_name(m_name), m_home(m_home),
  m_HealthStatus(m_HealthStatus),
  m_purchase_list(m_purchase_list)
{
}

const std::string & Character::getM_home() const
{
  return m_home;
}

void Character::setM_home(const std::string & m_home)
{
  Character::m_home = m_home;
}

const HealthStatus & Character::getM_HealthStatus() const
{
  return m_HealthStatus;
}

void Character::setM_HealthStatus(const HealthStatus & m_HealthStatus)
{
  Character::m_HealthStatus = m_HealthStatus;
}

const PurchaseRecordVectorType & Character::getM_purchase_list() const
{
  return m_purchase_list;
}

void Character::setM_purchase_list(const PurchaseRecordVectorType & m_purchase_list)
{
  Character::m_purchase_list = m_purchase_list;
}
