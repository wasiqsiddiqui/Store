#include <iostream>
#include <sstream>
#include <string>
#include "Clothing.h"
using namespace std;

string Clothing::getInfo(){
    
    return this->getDescription();
}

Clothing::Clothing(int num, string name) : Product(num,name){
    this->setDefaultReturnPeriod(30);
}


double Clothing::getPrice(){
    if((totalCost / (numSold + inventory)) > 100){
        markupMultiplier = 1.35;
        price = (totalCost / (numSold + inventory)) * markupMultiplier;
    }
    else if((totalCost / (numSold + inventory)) > 50){
        markupMultiplier = 1.4;
        (totalCost / (numSold + inventory)) * markupMultiplier;
    }
    else if((totalCost / (numSold + inventory)) > 25){
        markupMultiplier = 1.45;
        (totalCost / (numSold + inventory)) * markupMultiplier;
    }
    else{
        markupMultiplier = 1.5;
        (totalCost / (numSold + inventory)) * markupMultiplier;
    }
    
    return price;
}

Product::Category Clothing::getType(){
    return Category::Clothing;
}

int Clothing::getReturnPeriod(){
    return 60;
}

int Clothing::getSize(){
    return size;
}

void Clothing::setSize(int size){
    this->size = size;
}