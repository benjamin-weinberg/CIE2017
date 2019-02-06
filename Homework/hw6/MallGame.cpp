//
// Created by Johnson, Hans J on 4/20/17.
//

#include "MallGame.h"

#include <random>
#include <iomanip>

#include "HW6JsonHelper.h"
#include "HW6HelperFunctions.h"

using namespace std;

MallGame::MallGame(const string& item_info_fn, const string& store_info_fn, const string& character_info_fn)
{
  // Read the item json info file
  HW6JsonHelper itemHelper(item_info_fn);
  Json::Value item_info = itemHelper.getJsonDataStructure();
  m_ItemMap = GetAllItems(item_info);


  // Read the store json info file
  HW6JsonHelper storeHelper(store_info_fn);
  Json::Value store_info = storeHelper.getJsonDataStructure();
  m_StoreMap = GetAllStores(store_info);

  // Read the character json info file
  HW6JsonHelper characterHelper(character_info_fn);
  Json::Value character_info = characterHelper.getJsonDataStructure();

  m_CharacterMap = GetAllCharacters(character_info);

//  std::map<string, Character*>::iterator it;
  for(m_activePlayer = m_CharacterMap.begin(); m_activePlayer!=m_CharacterMap.end(); m_activePlayer++)
  {
      m_activePlayer->second->setAtStore(m_StoreMap.begin()->first);
      m_PlayersLeft++;
  }
}

// (example solution is less than 30 lines of code including blank lines and display code.
// if you have more than 60 lines of code here, you are probably not using the object classes
// correctly
std::string MallGame::Play()
{

    m_activePlayer = m_CharacterMap.begin();
    while (m_PlayersLeft>1)
    {
        //roll a dice to determine how many stores the player moves
        dice_roll = rollDice();
        movePlayerToNextStore();

        //roll a dice to determine what the player does
        dice_roll = rollDice();
        //if odd:
        if (isOddRoll(dice_roll))
        {
            //not enough time to do this right now :'(
        }
        //even:
        else
        {
            std::map<string, Item*>::iterator itemit;
            itemit = m_ItemMap.begin();
            int purchase = 0;
            purchase = StoreBase::selectFromInventory();
            for(int i =0; i<purchase; i++)
            {
               itemit++;
            }
            m_activePlayer->CharacterBase::addPurchase(itemit->second);
        }

        m_prevPlayer=m_activePlayer;
        nextPlayer();
        m_prevPlayer->second->DisplayHealthStatus(m_StoreMap,m_ItemMap);



        bool playerDied=false;
        if(m_prevPlayer->second->getHealthStatus().getFood()<=0) {playerDied=true;}
        if(m_prevPlayer->second->getHealthStatus().getEntertainment()<=0) {playerDied=true;}
        if(m_prevPlayer->second->getHealthStatus().getClothes()<=0) {playerDied=true;}
        if (playerDied)
        {
            m_PlayersLeft--;
            m_CharacterMap.erase(m_prevPlayer);
        }

    }


    return m_activePlayer->second->getName();
}

MallGame::~MallGame()
{
  //TODO: Delete all dynamically allocated memory
    // I dont think I have any right now... so I can't delete any of it...
}

int MallGame::rollDice() const
{
  //See: http://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
  static std::random_device rd;  //Will be used to obtain a seed for the random number engine
  static std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
  static std::uniform_int_distribution<> intDistribution(1, 6);

  const int dice_value = intDistribution(gen);
  return dice_value;
}


void MallGame::movePlayerToNextStore()
{
    std::map<string, Store*>::iterator it;
    it = m_StoreMap.find(m_activePlayer->second->getAtStore());
    for (int i =0; i<dice_roll;i++)
    {
        it++;
        if(it==m_StoreMap.end())
        {
            it = m_StoreMap.begin();
        }
    }
    m_activePlayer->second->Character::setAtStore(it->second->getName());
}

void MallGame::nextPlayer()
{
    m_activePlayer++;
    if(m_activePlayer==m_CharacterMap.end())
    {
        m_activePlayer = m_CharacterMap.begin();
    }
}

bool MallGame::isOddRoll(const int roll_value) const
{
  return roll_value%2==1; //Use modulo to determine if roll is odd
}

