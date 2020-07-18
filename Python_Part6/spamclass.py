class Spam:
    numInstances=0
    def __init__ (self):           #use class method instead of static
        Spam.numInstances +=1
    def printNumInstances(cls):
        print("Number of instances: %s" % cls.numInstances)
    printNumInstances = classmethod(printNumInstances)
