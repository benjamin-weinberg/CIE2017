//
// Created by Johnson, Hans J on 4/21/17.
//

#include "CharacterBase.h"
#include "Character.h"

Character::Character(const string name, const string home, const HealthStatus& hs)
  :CharacterBase(name, home, hs)
{
}

void Character::UpdateHealthStatus(const StoreMapType& all_stores, const ItemMapType& all_items)
{
  //TODO: Fix code below to compute the current cumulative health status from the current purchases list


  //for (auto purchase_elem : this->getPurchase_list()) {
  //TODO: Review very provided code that existed in HW5 in the PrintCummulativeHealthScoresAndExpenditures function
  //TODO: add puchased items health status to  curr_store_quality_multiplier*itemHealthStatus
  //}
}

bool Character::DisplayHealthStatus(const StoreMapType& all_stores, const ItemMapType& all_items)
{
  this->UpdateHealthStatus(all_stores, all_items);
    if(this->getHealthStatus().getFood()<=0) {
        cout << "-------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t .·´¯`(>▂<)´¯`·." << this->getName() << " died of starvation" << endl;
    }
    if(this->getHealthStatus().getClothes()<=0) {
        cout << "-------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t .·´¯`(>▂<)´¯`·." << this->getName() << " died of embarassment" << endl;
    }
    if(this->getHealthStatus().getEntertainment()<=0) {
        cout << "-------------------------------------------------------" << endl;
        cout << "\t\t\t\t\t .·´¯`(>▂<)´¯`·." << this->getName() << " died of bordom" << endl;
    }
  return false;
}
void Character::setAtStore(const string name)
{
    m_AtStore=name;
}
const string Character::getAtStore()
{
    return m_AtStore;
}
