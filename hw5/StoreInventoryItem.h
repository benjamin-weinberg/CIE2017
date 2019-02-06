//
// Created by Chibuzo Nwakama on 4/18/17.
//

#ifndef HOMEWORK5_STOREINVENTORYITEM_H
#define HOMEWORK5_STOREINVENTORYITEM_H
#include <string>
#include <map>

class StoreInventoryItem {
public:
    StoreInventoryItem(const std::string &m_name, unsigned int m_barcode);

    const std::string &getM_name() const;

    unsigned int getM_barcode() const;

    void setM_barcode(unsigned int m_barcode);

public:
private:
    const std::string m_name;
    unsigned int m_barcode;
};
typedef std::map<int,StoreInventoryItem *> StoreInventoryItemMapType;

#endif //HOMEWORK5_STOREINVENTORYITEM_H
