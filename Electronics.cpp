#include <iostream>
#include <sstream>
#include <string>
#include "Electronics.h"
#include "Product.h"
using namespace std;


string Electronics::getInfo(){
    
    return this -> getDescription();
}

Product::Category Electronics::getType(){
    return Category::Electronics;
}

Electronics::Electronics(int num, string name): Product(num, name){
    this -> setDefaultReturnPeriod(30);
}

double Electronics::getPrice(){
    if((Product::totalCost / (Product::numSold + Product::inventory)) > 1000){
        markupMultiplier = 1.05;
        price = (Product::totalCost / (Product::numSold + Product::inventory)) * markupMultiplier;
    }
    else if((Product::totalCost / (Product::numSold + Product::inventory)) > 100){
        markupMultiplier = 1.07;
        price = (Product::totalCost / (Product::numSold + Product::inventory)) * markupMultiplier;
    }
    else {
        markupMultiplier = 1.1;
        price = (Product::totalCost / (Product::numSold + Product::inventory)) * markupMultiplier;
    }
    return price;
}

int Electronics::getReturnPeriod(){
    return 30;
}


