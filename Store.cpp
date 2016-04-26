#include <iostream>
#include <string>
#include <stdexcept>
#include "Store.h"
#include "Clothing.h"
#include "Electronics.h"
#include "Household.h"
using namespace std;

Store::Store(){
    
}

Store::Store(string name){
    storeName = name;;
    
}

string Store::getStorename(){
    return this->storeName;
}

void Store::setStorename(string name){
    this->storeName = name;
    return;
}

void Store::addProduct(int productNum, string ProductName, Product::Category category){
    
    if(productNum < 1)
    {
        throw runtime_error("Error");
        
        
    }
    
    if(category == Product::Clothing){
        Product_list.push_back(new Clothing(productNum, ProductName));
    }
    
    else if(category == Product::Electronics ){
        Product_list.push_back(new Electronics(productNum, ProductName));
    }
    
    else if(category == Product::Household){
        Product_list.push_back(new Household(productNum, ProductName));
    }
}

Product& Store::getProduct(int productNum){
    
    for(int i = 0; i < Product_list.size(); ++i){
        Product& p = *Product_list.at(i);
        if(productNum == p.getProductNum() )
        {
            return p;
        }
    }
    throw runtime_error("Error");
    
    
}

Customer& Store::getCustomer(int customerID){
    
    for(int i = 0; i < Customer_list.size(); ++i){
        Customer& c = Customer_list.at(i);
        if(customerID == c.getID() )
        {
            return c;
        }
    }
    throw runtime_error("Error");
    
}

void Store::takeShipment(int productNum, int quantity, double cost){
    
    for (int i = 0; i < Product_list.size(); ++i){
        Product& prod = *Product_list.at(i);
        if (prod.getProductNum() == productNum)
        {
            getProduct(productNum).addShipment(quantity, cost);
        }
        
    }
    throw runtime_error("Error");
    
}


void Store::addCustomer(int customerID, string name){
    
    if(customerID >= 1)
    {
        Customer_list.push_back(Customer(name,customerID,false));
        
    }
    else
    {
        throw runtime_error("Error");
    }
}

void Store::makePurchase(int customerID, int productNum, int quantity){
    
    if(Customer_list.at(customerID).getBalance() > Product_list.at(productNum)->getPrice()){
        Product_list.at(productNum)->processOrder(quantity);
    }
    
    else{
        throw runtime_error("Error");
    }
    
}

void Store::takePayment(int customerID, double amount){
    Customer& cust = getCustomer(customerID);
    cust.processPayment(amount);
    
}


void Store::listProducts(){
    
    for(int i = 0; i < Product_list.size(); i++)
    {
        cout << Product_list.at(i) << endl;
    }
    
}
void Store::listCustomers(){
    for(int i = 0; i < Customer_list.size(); i++ )
    {
        cout << Customer_list.at(i) << endl;
    }
    
}




