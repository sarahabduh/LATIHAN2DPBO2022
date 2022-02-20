package Latihan2;

class Memory extends Hardware {
    private String frequency;
    private String memorySize;
    private String supportsCuda;

    // Constructor
    public Memory(){
    }

    // Get-set Frequency
    public String getFrequency() {
        return frequency;
    }

    public void setFrequency(String frequency) {
        this.frequency = frequency;
    }
    
    // Get-set MemorySize
    public String getMemorySize() {
        return memorySize;
    }

    public void setMemorySize(String memorySize) {
        this.memorySize = memorySize;
    }

    // Get-set SupportsCuda
    public String getSupportsCuda() {
        return supportsCuda;
    }

    public void setSupportsCuda(String supportsCuda) {
        this.supportsCuda = supportsCuda;
    }
}


