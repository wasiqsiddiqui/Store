#pragma once
#include "Product.h"

class Household: public Product{
public:
    Household()=default;
    Household(int, std::string);
    std::string getInfo();
    double getPrice();
    int getReturnPeriod();
    Category getType();
    double price;
};