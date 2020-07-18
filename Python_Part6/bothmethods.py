class Methods:
    def imeth(self, x):     #normal instance method:passed a self
        print([self, x])
    def smeth(x):            #static: no instance passed
        print([x])
    def cmeth(cls, x):      #class: gets class , not instance
        print([cls,x])
    smeth = staticmethod(smeth)     #make smeth a static method (or @)
    cmeth = classmethod(cmeth)      #make cmeht a class mehtod (or @)
    