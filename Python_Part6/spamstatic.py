class Spam:
    numInstances = 0                #use static method for class data
    def __init__ (self):
        Spam.numInstances += 1
    def printNumInstances():
        print("Number of instaces: %s" % Spam.numInstances)
    printNumInstances = staticmethod(printNumInstances)
class Sub(Spam):
    def printNumInstances():        #override a static mehtod but call back to orignional
        print("Extra stuff...")
        Spam.printNumInstances()
    printNumInstances = staticmethod(printNumInstances)