#pragma once
#include "Product.h"

class Electronics : public Product {
    
public:
    Electronics() = default;
    Electronics(int, std::string);
    std::string getInfo();
    double getPrice();
    int getReturnPeriod();
    double markupMultiplier;
    double costPerItem;
    int totalCost;
    int inventory;
    int numSold;
    Category getType();
    double price;
    
};