//
// Created by Chibuzo Nwakama on 4/18/17.
//

#ifndef HOMEWORK5_PURCHASERECORD_H
#define HOMEWORK5_PURCHASERECORD_H
#include <string>
#include <vector>
class PurchaseRecord {
public:
    PurchaseRecord(const std::string &m_store, int m_barcode);

    const std::string &getM_store() const;

    int getM_barcode() const;

    void setM_barcode(int m_barcode);

public:
private:
    const std::string m_store;
    const int m_barcode;
};

typedef std::vector<PurchaseRecord *> PurchaseRecordVectorType;
#endif //HOMEWORK5_PURCHASERECORD_H
