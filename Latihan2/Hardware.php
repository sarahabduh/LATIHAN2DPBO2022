<?php

class Hardware extends Product{
    private $brand;
    private $model;

    public function __construct(){
    }

    // Get-set Brand
    public function setBrand($brand){
        $this->brand = $brand;
    }

    public function getBrand(){
        return $this->brand;
    }

    // Get-set Model
    public function setModel($model){
        $this->model = $model;
    }

    public function getModel(){
        return $this->model;
    }
}

?>