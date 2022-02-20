from Product import Product
from Hardware import Hardware
from Memory import Memory

cProduct = Product()
cHardware = Hardware()
cMemory = Memory()

# set atribut Product
cProduct.setPrice("20.000.000")
cProduct.setIdProduct("ARG-02030-12345")

# set atribut Hardware
cHardware.setPrice("20.000.000")
cHardware.setIdProduct("ARG-02030-12345")
cHardware.setBrand("ASUS ROG")
cHardware.setModel("GA401")

# set atribut Memory
cMemory.setPrice("20.000.000")
cMemory.setIdProduct("ARG-02030-12345")
cMemory.setBrand("ASUS ROG")
cMemory.setModel("GA401")
cMemory.setFrequency("3200 mHz")
cMemory.setMemorySize("16 GB")
cMemory.setSupportsCuda("Yes")

# menampilkan isi Product
print("<Product>")
print("Harga         : " + str(cProduct.getPrice()))
print("ID Produk     : " + str(cProduct.getIdProduct()), '\n')

# menampilkan isi Hardware
print("<Hardware>")
print("Harga         : " + str(cHardware.getPrice()))
print("ID Produk     : " + str(cHardware.getIdProduct()))
print("Brand         : " + str(cHardware.getBrand()))
print("Model         : " + str(cHardware.getModel()), '\n')

# menampilkan isi Memory
print("+--------------------------------------+")
print("| Spesifikasi Produk                   |")
print("+--------------------------------------+")
print("Harga         : " + str(cMemory.getPrice()))
print("ID Produk     : " + str(cMemory.getIdProduct()))
print("Brand         : " + str(cMemory.getBrand()))
print("Model         : " + str(cMemory.getModel()))
print("Frequency     : " + str(cMemory.getFrequency()))
print("Memory Size   : " + str(cMemory.getMemorySize()))
print("Supports CUDA : " + str(cMemory.getSupportsCuda()))
