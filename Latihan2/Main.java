package Latihan2;

class Main {
    public static void main(String[] args) {

        // set atribut Product
        Product cProduct = new Product();
        cProduct.setPrice("20.000.000");
        cProduct.setIdProduct("ARG-02030-12345");
        
        // set atribut Hardware
        Hardware cHardware = new Hardware();
        cHardware.setPrice("20.000.000");
        cHardware.setIdProduct("ARG-02030-12345");
        cHardware.setBrand("ASUS ROG");
        cHardware.setModel("GA401");

        // set atribut Memory
        Memory cMemory = new Memory();
        cMemory.setPrice("20.000.000");
        cMemory.setIdProduct("ARG-02030-12345");
        cMemory.setBrand("ASUS ROG");
        cMemory.setModel("GA401");
        cMemory.setFrequency("3200 mHz");
        cMemory.setMemorySize("16 GB");
        cMemory.setSupportsCuda("Yes");

        // menampilkan isi Product
        System.out.println("<Product>");
        System.out.println("Harga         : " + cProduct.getPrice());
        System.out.println("ID Produk     : " + cProduct.getIdProduct());
        System.out.print("\n");

        // menampilkan isi Hardware
        System.out.println("<Hardware>");
        System.out.println("Harga         : " + cHardware.getPrice());
        System.out.println("ID Produk     : " + cHardware.getIdProduct());
        System.out.println("Brand         : " + cHardware.getBrand());
        System.out.println("Model         : " + cHardware.getModel());
        System.out.print("\n");

        // menampilkan isi Memory
        System.out.println("+--------------------------------------+");
        System.out.println("| Spesifikasi Produk                   |");
        System.out.println("+--------------------------------------+");
        System.out.println("Harga         : " + cMemory.getPrice());
        System.out.println("ID Produk     : " + cMemory.getIdProduct());
        System.out.println("Brand         : " + cMemory.getBrand());
        System.out.println("Model         : " + cMemory.getModel());
        System.out.println("Frequency     : " + cMemory.getFrequency());
        System.out.println("Memory Size   : " + cMemory.getMemorySize());
        System.out.println("Supports Cuda : " + cMemory.getSupportsCuda());
    }
}
