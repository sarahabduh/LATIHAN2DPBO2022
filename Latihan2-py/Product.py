class Product:
    # Constructor
    def __init__(self):
        self.__price = ""
        self.__idProduct = ""
    
    # Get-set Price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price
    
    # Get-set ID Product
    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    def getIdProduct(self):
        return self.__idProduct