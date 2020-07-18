class Person:                                            #start a class
    def __init__ (self, name, job=None, pay=0):            # add record field initialization
        self.name = name                                # 3 arguments for consturctor
        self.job = job                                   # fill out fields when created
        self.pay = pay   
    def lastName(self):                       #self is the new instance object
        return self.name.split()[-1]
    def giveRaise(self, percent):
        self.pay = int(self.pay * (1+percent))
    def __repr__(self):
        return '[Person: %s, %s]' % (self.name, self.pay)

class Manager(Person):                              #define a subclass of person, inherit person attr
    def __init__ (self, name, pay):                 #redefine constructor
        Person.__init__(self, name, 'mgr', pay)     #run origional with 'mgr'
    def giveRaise(self, percent, bonus=.10):      #redefine to customize
        Person.giveRaise(self, percent + bonus)      #good augment origional       
if __name__ == '__main__':
    #self test code
    bob = Person('Bob Smith')                                   #test the class
    sue = Person('Sue Jones', job = 'dev' , pay = 100000)       #runs --init--autormatically
    print(bob.name, bob.pay)                                #fetch attached attributes                  bob smith 0
    print(sue.name, sue.pay)                                 #sue and bobs attr. differ                 sue jones 100000
    print(bob)                                                  #[person: bob smith, 0]
    print(sue)                                                  #[persion: sue jones 10000]
    print(bob.lastName(), sue.lastName())                            #extract objects last name         smith jones
    sue.giveRaise(0.10)                                         #give this objecet a raise
    print(sue.pay)                                              #110000
    print(sue)                                                  #[persion: sue joens, 11000]
    #tom = Manager('Tom Jones', 'mgr', 5000)                     # make a manager: __init__
    tom = Manager('Tom Jones', 5000)                            #now job name is not needed, impllied by class
    tom.giveRaise(.10)                                          # runs custom version               he gets 10% from person AND 10% from manager
    print(tom.lastName())                                       #runs inherited method              jones
    print(tom)                                                  # runs inherited__repr__            [persion: tom jones, 6000]
    print('---ALL THREE--')
    for obj in (bob, sue, tom):                                 # preocess obj. generically
        obj.giveRaise(.10)                                      # run this ojb. giveRaise           0, 121000, 72000
        print(obj)                                              # run the common __repr__           tom gets 20% raise b/c of manager



