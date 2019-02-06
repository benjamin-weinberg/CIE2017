//
// Created by Johnson, Hans J on 4/22/17.
//

#ifndef HOMEWORK5_GAMEOBJECT_H
#define HOMEWORK5_GAMEOBJECT_H

#include "HealthStatus.h"

class GameObject {
public:
  GameObject(const string name, const HealthStatus& hs);

  const string& getName() const;

  const HealthStatus& getHealthStatus() const;

  void setHealthStatus(const HealthStatus& HealthStatus);

private:
  const string m_name;
  HealthStatus m_HealthStatus;
};

#endif //HOMEWORK5_GAMEOBJECT_H
