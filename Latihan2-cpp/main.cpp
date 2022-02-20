#include "Memory.cpp"

int main(){
    Product cProduct;
    Hardware cHardware;
    Memory cMemory;

    // set atribut Product
    cProduct.setPrice("20.000.000");
    cProduct.setIdProduct("ARG-02030-12345");

    // set atribut Hardware
    cHardware.setPrice("20.000.000");
    cHardware.setIdProduct("ARG-02030-12345");
    cHardware.setBrand("ASUS ROG");
    cHardware.setModel("GA401");

    // set atribut Memory
    cMemory.setPrice("20.000.000");
    cMemory.setIdProduct("ARG-02030-12345");
    cMemory.setBrand("ASUS ROG");
    cMemory.setModel("GA401");
    cMemory.setFrequency("3200 mHz");
    cMemory.setMemorySize("16 GB");
    cMemory.setSupportsCuda("Yes");

    // menampilkan isi Product
    cout << "<Product>" << endl;
    cout << "Harga          : " << cProduct.getPrice() << endl;
    cout << "ID Produk      : " << cProduct.getIdProduct() << endl;
    cout << endl;

    // menampilkan isi Hardware
    cout << "<Hardware>" << endl;
    cout << "Harga          : " << cHardware.getPrice() << endl;
    cout << "ID Produk      : " << cHardware.getIdProduct() << endl;
    cout << "Brand          : " << cHardware.getBrand() << endl;
    cout << "Model          : " << cHardware.getModel() << endl;
    cout << endl;

    // menampilkan isi Memory
    cout << "+--------------------------------------+" << endl;
    cout << "| Spesifikasi Produk                   |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "Harga          : " << cMemory.getPrice() << endl;
    cout << "ID Produk      : " << cMemory.getIdProduct() << endl;
    cout << "Brand          : " << cMemory.getBrand() << endl;
    cout << "Model          : " << cMemory.getModel() << endl;
    cout << "Frequency      : " << cMemory.getFrequency() << endl;
    cout << "Memory Size    : " << cMemory.getMemorySize() << endl;
    cout << "Supports CUDA  : " << cMemory.getSupportsCuda() << endl;

    return 0;
}

