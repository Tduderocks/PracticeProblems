#file test minxin1.py 
from listinstance import Listinstance #get lister tool class
class Super:
    def __init__ (self):    #superclass _init_
        self.data1 = 'spam' # create instance attr
    def ham(self):
        pass
class Sub(Super, listinstance):     #mix in ham and a _str_
    def __init__ (self):        #listers ahve access to self
        Super.__init__(self)
        self.data2 = 'eggs'     #make instance attr
        self.data3 = 42
    def spam(self):     #define another method here
        pass
if __name__ =='__main__':
    X = sub()
    print(X)                #run mixed in_str_