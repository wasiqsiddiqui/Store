#pragma once
#include "Product.h"

class Clothing : public Product{
public:
    Clothing()=default;
    Clothing(int, std::string);
    std::string getInfo();
    double getPrice();
    int getReturnPeriod();
    int getSize();
    void setSize(int size);
    double markupMultiplier;
    int totalCost;
    int inventory;
    int numSold;
    Category getType();
    double price;
    
    
private:
    int size;
    
    
};