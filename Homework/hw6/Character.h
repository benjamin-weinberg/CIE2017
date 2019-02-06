//
// Created by Johnson, Hans J on 4/21/17.
//

#ifndef HOMEWORK5_CHARACTER_H
#define HOMEWORK5_CHARACTER_H

#include "CharacterBase.h"

class Character
  : public CharacterBase {
public:
  Character(const string name, const string home, const HealthStatus& hs);

  /**
   * @brief Display the current health status of the player from the current mall environment
   * @param all_stores -- All the store in the Mall
   * @param all_items  --- All the items in the Mall
   * @return True if all health aspects are good, false otherwise.
   */
  bool DisplayHealthStatus(const StoreMapType& all_stores, const ItemMapType& all_items);

  /**
   * @brief Compute the current health status for this character
   */
  void UpdateHealthStatus(const StoreMapType& all_stores, const ItemMapType& all_items);
  void setAtStore(const std::string name);
  const std::string getAtStore();
private:
    std::string m_AtStore = "none";
};
typedef map<std::string, Character*> CharacterMapType;
#endif //HOMEWORK5_CHARACTER_H
