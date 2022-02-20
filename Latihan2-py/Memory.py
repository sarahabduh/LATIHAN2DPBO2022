from Hardware import Hardware # Superclass

class Memory(Hardware):
    # Constructor
    def __init__(self):
        self.__frequency = ""
        self.__memorySize = ""
        self.__supportsCuda = ""
    
    # Get-set Frequency
    def setFrequency(self, frequency):
        self.__frequency = frequency

    def getFrequency(self):
        return self.__frequency
    
    # Get-set MemorySize
    def setMemorySize(self, memorySize):
        self.__memorySize = memorySize

    def getMemorySize(self):
        return self.__memorySize
    
    # Get-set SupportsCuda
    def setSupportsCuda(self, supportsCuda):
        self.__supportsCuda = supportsCuda

    def getSupportsCuda(self):
        return self.__supportsCuda