#include <iostream>
#include <string>
#include <stdexcept>
#include "Product.h"
using namespace std;

Product::Product(int productNum, string productName){
    this->productNum = productNum;
    this->productName = productName;
    return;
}

void Product::setDescription(string description){
    this->description = description;
    return;
}

string Product::getDescription(){
    return this ->description;
}

void Product::setDefaultReturnPeriod(int days){
    this->days = days;
    return;
}

int Product::getReturnPeriod(){
    return this->days;
}

int Product::getNumberSold(){
    return 0;
}

double Product::getTotalCost(){
    return 0;
}

int Product::getProductNum(){
    return this->productNum;
}


int Product::getInventoryCount(){
    return this->inventory;
}

void Product::addShipment(int quantity, double cost){
    inventory += quantity;
    totalCost += cost;
    
}

double Product::getPrice() {
    double price = (totalCost / ((inventory + numSold) * 1.25));
    return price;
    
}

void Product::processOrder(int quantity){
    if(quantity != inventory){
        throw runtime_error("Error");
    }
    else{
        inventory = inventory - quantity;
        numSold = numSold + quantity;
    }
    
}

/*
 ostream& operator<<(ostream& out, Product& p){
 out <<p.getNumberSold()<<endl;
 out <<p.getDescription()<<endl;
 out <<p.getReturnPeriod()<<endl;
 out <<p.getPrice() <<endl;
 out <<p.getTotalCost()<<endl;
 
 return out;
 }
 */

//Milestone 3
Product::Category Product::getType(){
    
}

string Product::getInfo(){
    
}














