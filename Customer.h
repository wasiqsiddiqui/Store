#pragma once
#include <string>
#include <vector>
#include "Product.h"

class Customer{
public:
    Customer(std::string name, int customerID, bool credit);
    void setName(std::string name);
    std::string getName() ;
    int getID();
    void setCredit(bool hasCredit);
    bool getCredit() ;
    double getBalance();
    void processPayment(double amount);
    void processPurchase(double amount, const Product* product);
    
    
private:
    std::string name;
    int customerID;
    bool credit;
    bool hasCredit;
    int balance;
    std::vector<const Product*> product_list;
};

ostream& operator<<(ostream &out, const Customer cus);