<?php

class Memory extends Hardware{
    private $frequency;
    private $memorySize;
    private $supportsCuda;

    public function __construct(){
    }

    // Get-set Frequency
    public function setFrequency($frequency){
        $this->frequency = $frequency;
    }

    public function getFrequency(){
        return $this->frequency;
    }

    // Get-set Memory Size
    public function setMemorySize($memorySize){
        $this->memorySize = $memorySize;
    }

    public function getMemorySize(){
        return $this->memorySize;
    }

    // Get-set SupportsCuda
    public function setSupportsCuda($supportsCuda){
        $this->supportsCuda = $supportsCuda;
    }

    public function getSupportsCuda(){
        return $this->supportsCuda;
    }
}

?>