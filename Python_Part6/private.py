class PrivateExc(Exception) : pass
class Privacy:
    def __setattr__ (self, attrname, value):    #on self.attrname = value
        if attrname in self.privates:
            raise PrivateExc(attrname, self)
        else:
            self.__dict__[attrname]=value 
class Test1(Privacy):
    privates = ['age']
class Test2(Privacy):
    privates = ['name', 'pay']
    def __init__(self):
        self.__dict__['name'] = 'Tom'
if __name__ == '__main__':
    x =Test(1)
    y = Test(2)
    x.name = 'bob' #works
    #y.name = 'sue' fails
    print(x.name)
    y.age = 30 #works
    #x.age = 40 fails
    print(y.age)