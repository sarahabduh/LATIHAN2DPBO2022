#include <iostream>
#include <string>

using namespace std;

class Product{

    private:

    string price;
    string idProduct;

    public:

    // Constructor
    Product(){
    }

    Product(string price, string idProduct){
        this->price = price;
        this->idProduct = idProduct;
    }

    // Get-set Price
    void setPrice(string price){
        this->price = price;
    }

    string getPrice(){
        return this->price;
    }

    // Get-set ID Product
    void setIdProduct(string idProduct){
        this->idProduct = idProduct;
    }

    string getIdProduct(){
        return this->idProduct;
    }

    // Deconstructor
    ~Product(){
    }

};