#include "Product.cpp"

using namespace std;

class Hardware : public Product{

    private:

    string brand;
    string model;

    public:

    // Constructor
    Hardware(){
    }

    Hardware(string brand, string model){
        this->brand = brand;
        this->model = model;
    }

    // Get-set Brand
    void setBrand(string brand){
        this->brand = brand;
    }

    string getBrand(){
        return this->brand;
    }

    // Get-set Model
    void setModel(string model){
        this->model = model;
    }

    string getModel(){
        return this->model;
    }

    // Deconstructor
    ~Hardware(){
    }

};