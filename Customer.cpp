#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include "Customer.h"
using namespace std;

Customer::Customer(string name, int customerID, bool credit){
    this->name = name;
    this->customerID = customerID;
    this->credit = credit;
}

void Customer::setName(string name){
    this->name = name;
    return;
}

string Customer::getName(){
    return this-> name;
}

int Customer::getID(){
    return customerID;
}

void Customer::setCredit(bool hasCredit){
    this->hasCredit = hasCredit;
    return;
}

bool Customer::getCredit(){
    return this->hasCredit;
}

double Customer::getBalance(){
    return 0;
}


void Customer::processPayment(double amount){
    balance = balance + amount;
    
}

void Customer::processPurchase(double amount, const Product* product){
    if(hasCredit){
        balance = balance - amount;
    }
    
    else{
        if(balance >= amount){
            balance = balance - amount;
        }
        else{
            throw runtime_error("Error");
            
        }
    }
    product_list.push_back(product);
}


ostream& operator<<(ostream &out, Customer cus){
    
    out<<cus.getName()<<endl;
    out<<cus.getID()<<endl;
    out<<cus.getCredit()<<endl;
    out<<cus.getBalance()<<endl;
    
    return out;
}















