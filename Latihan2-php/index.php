<?php

    include "Product.php";
    include "Hardware.php";
    include "Memory.php";

    // set atribut Product
    $cProduct = new Product();
    $cProduct->setPrice("20.000.000");
    $cProduct->setIdProduct("ARG-02030-12345");

    // set atribut Hardware
    $cHardware = new Hardware();
    $cHardware->setPrice("20.000.000");
    $cHardware->setIdProduct("ARG-02030-12345");
    $cHardware->setBrand("ASUS ROG");
    $cHardware->setModel("GA401");

    // set atribut Memory
    $cMemory = new Memory();
    $cMemory->setPrice("20.000.000");
    $cMemory->setIdProduct("ARG-02030-12345");
    $cMemory->setBrand("ASUS ROG");
    $cMemory->setModel("GA401");
    $cMemory->setFrequency("3200 mHz");
    $cMemory->setMemorySize("16 GB");
    $cMemory->setSupportsCuda("Yes");

    // menampilkan isi Product
    echo "<b> [Product] </b>". "<br>";
    echo "Harga           : ". $cProduct->getPrice(). "<br>";
    echo "ID Produk       : ". $cProduct->getIdProduct(). "<br><br>";

    // menampilkan isi Hardware
    echo "<b> [Hardware] </b>". "<br>";
    echo "Harga           : ". $cHardware->getPrice(). "<br>";
    echo "ID Produk       : ". $cHardware->getIdProduct(). "<br>";
    echo "Brand           : ". $cHardware->getBrand(). "<br>";
    echo "Model           : ". $cHardware->getModel(). "<br><br>";

    // menampilkan isi Memory
    echo "=======================". "<br><br>";
    echo "<b> >> Spesifikasi Produk  </b>". "<br>";
    echo "Harga           : ". $cMemory->getPrice(). "<br>";
    echo "ID Produk       : ". $cMemory->getIdProduct(). "<br>";
    echo "Brand           : ". $cMemory->getBrand(). "<br>";
    echo "Model           : ". $cMemory->getModel(). "<br>";
    echo "Frequency       : ". $cMemory->getFrequency(). "<br>";
    echo "Memory Size     : ". $cMemory->getMemorySize(). "<br>";
    echo "Supports CUDA   : ". $cMemory->getSupportsCuda(). "<br>";
    
?>