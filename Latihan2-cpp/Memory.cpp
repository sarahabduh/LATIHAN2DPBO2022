#include "Hardware.cpp"

using namespace std;

class Memory : public Hardware{

    private:

    string frequency;
    string memorySize;
    string supportsCuda;

    public:

    // Constructor
    Memory(){
    }

    Memory(string frequency, string memorySize, string supportsCuda){
        this->frequency = frequency;
        this->memorySize = memorySize;
        this->supportsCuda = supportsCuda;
    }

    // Get-set Frequency
    void setFrequency(string frequency){
        this->frequency = frequency;
    }

    string getFrequency(){
        return this->frequency;
    }

    // Get-set Memory Size
    void setMemorySize(string memorySize){
        this->memorySize = memorySize;
    }

    string getMemorySize(){
        return this->memorySize;
    }

    // Get-set Supports Cuda
    void setSupportsCuda(string supportsCuda){
        this->supportsCuda = supportsCuda;
    }

    string getSupportsCuda(){
        return this->supportsCuda;
    }

    ~Memory(){
    }

};