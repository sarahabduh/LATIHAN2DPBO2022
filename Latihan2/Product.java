package Latihan2;

class Product {
    private String price;
    private String idProduct;

    // Constructor
    public Product(){
    }

    // Get-set Price
    public String getPrice(){
        return price;
    }

    public void setPrice(String price){
        this.price = price;
    }

    // Get-set ID Product
    public String getIdProduct(){
        return idProduct;
    }

    public void setIdProduct(String idProduct){
        this.idProduct = idProduct;
    }
}