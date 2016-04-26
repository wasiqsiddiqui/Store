#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product{
public:
    Product() = default;
    Product(int productNum, std::string productName);
    void setDescription(std::string description);
    std::string getDescription();
    void setDefaultReturnPeriod(int days);
    virtual int getReturnPeriod();
    int getNumberSold();
    double getTotalCost();
    
    
    void addShipment(int quantity, double cost);
    virtual double getPrice() ;
    void processOrder(int quantity);
    int getProductNum();
    int getInventoryCount();
    
    enum Category{
        Electronics,
        Clothing,
        Household
    };
    
    virtual Category getType() = 0;
    virtual std::string getInfo() = 0;
    
protected:
    std::string productName;
    std::string description;
    int days;
    int totalCost;
    int inventory;
    int numSold;
    
    
    
    
private:
    int productNum;
    /*
     std::string productName;
     std::string description;
     int days;
     int totalCost;
     int inventory;
     int numSold;
     */
};

//ostream& operator<<(ostream& os, const Product p);

