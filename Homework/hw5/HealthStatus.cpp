//
// Created by Chibuzo Nwakama on 4/18/17.
//

#include "HealthStatus.h"
#include <string>

double HealthStatus::getM_food() const
{
  return m_food;
}

void HealthStatus::setM_food(double m_food)
{
  HealthStatus::m_food = m_food;
}

double HealthStatus::getM_clothes() const
{
  return m_clothes;
}

void HealthStatus::setM_clothes(double m_clothes)
{
  HealthStatus::m_clothes = m_clothes;
}

double HealthStatus::getM_entertainment() const
{
  return m_entertainment;
}

void HealthStatus::setM_entertainment(double m_entertainment)
{
  HealthStatus::m_entertainment = m_entertainment;
}

std::string HealthStatus::toString() const
{
  std::string food = std::to_string(m_food);
  std::string clothes = std::to_string(m_clothes);
  std::string entertainment = std::to_string(m_entertainment);
  std::string total = food + entertainment + clothes;
  return total
}

HealthStatus::HealthStatus(double m_food, double m_clothes, double m_entertainment) : m_food(m_food),
  m_clothes(m_clothes),
  m_entertainment(
    m_entertainment)
{
}
