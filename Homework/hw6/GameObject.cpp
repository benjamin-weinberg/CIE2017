//
// Created by Johnson, Hans J on 4/22/17.
//

#include "CharacterBase.h"

GameObject::GameObject(const string name, const HealthStatus& hs)
  :m_name{name}, m_HealthStatus{hs} { }

const string& GameObject::getName() const
{
  return m_name;
}

const HealthStatus& GameObject::getHealthStatus() const
{
  return m_HealthStatus;
}

void GameObject::setHealthStatus(const HealthStatus& HealthStatus)
{
  m_HealthStatus = HealthStatus;
}
