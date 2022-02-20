<?php

class Product{
    private $price;
    private $idProduct;

    public function __construct(){
    }

    // Get-set Price
    public function setPrice($price){
        $this->price = $price;
    }

    public function getPrice(){
        return $this->price;
    }

    // Get-set ID Product
    public function setIdProduct($idProduct){
        $this->idProduct = $idProduct;
    }

    public function getIdProduct(){
        return $this->idProduct;
    }
}

?>