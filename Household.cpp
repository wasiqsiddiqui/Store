#include <iostream>
#include <sstream>
#include <string>
#include "Household.h"
using namespace std;


Household::Household(int num, string name): Product(num, name){
    
    this->setDefaultReturnPeriod(30);
    
}


string Household::getInfo(){
    return this->getDescription();
    
}

Product::Category Household::getType(){
    return Category::Household;
}

double Household::getPrice(){
    
}

int Household::getReturnPeriod(){
    
}