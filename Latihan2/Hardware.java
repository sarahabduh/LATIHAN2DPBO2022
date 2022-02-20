package Latihan2;

class Hardware extends Product{
    private String brand;
    private String model;

    // Constructor
    public Hardware(){
    }

    // Get-set Brand
    public String getBrand(){
        return brand;
    }

    public void setBrand(String brand){
        this.brand = brand;
    }

    // Get-set Model
    public String getModel(){
        return model;
    }

    public void setModel(String model){
        this.model = model;
    }
}