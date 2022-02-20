from Product import Product # Superclass

class Hardware(Product):
    # Constructor
    def __init__(self):
        self.__brand = ""
        self.__model = ""
    
    # Get-set Brand
    def setBrand(self, brand):
        self.__brand = brand

    def getBrand(self):
        return self.__brand
    
    # Get-set Model
    def setModel(self, model):
        self.__model = model

    def getModel(self):
        return self.__model