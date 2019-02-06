//
// Created by Johnson, Hans J on 4/21/17.
//

#ifndef HOMEWORK5_STORE_H
#define HOMEWORK5_STORE_H

#include "StoreBase.h"

class Store
  : public StoreBase {
public:
  Store(const string name, const HealthStatus& hs);

//TODO: EXTRA CREDIT
//#define USE_EXTRA_CREDIT_CODE 1
#ifdef USE_EXTRA_CREDIT_CODE


#endif
};

typedef map<string, Store*> StoreMapType;

#endif //HOMEWORK5_STORE_H
