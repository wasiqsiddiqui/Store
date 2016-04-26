#pragma once
#include <string>
#include <vector>
#include "Customer.h"

class Store{
public:
    Store();
    Store(std::string name);
    std::string getStorename();
    void setStorename(std::string name);
    void addProduct(int productNum, std::string ProductName,  Product::Category category);
    Product& getProduct(int productNum);
    void addCustomer(int customerID, std::string name);
    Customer& getCustomer(int customerID);
    void takeShipment(int productNum, int quantity, double cost);
    void makePurchase(int customerID, int productNum, int quantity);
    void takePayment(int customerID, double amount);
    void listProducts();
    void listCustomers();
    
private:
    std::string storeName;
    std::vector<Product*> Product_list;
    std::vector<Customer> Customer_list;
    
};