"""
Record and process info about people.
run this file directly to test its classes.
"""
from classtools import AttrDisplay                          #use genertic display tool
class Person(AttrDisplay):                                  #mix in a repr at this level
    """create and process person records"""
    def __init__(self, name, job = None, pay=0):
        self.name=name
        self.job = job
        self.pay = pay
    def lastName(self):                                        #assumes last is last
        return self.name.split()[-1]
    def giveRaise(self, percent):                           # percent must be 0 to 1
        self.pay = int(self.pay * (1 + percent))
class Manager(Person):
    """A customized peron with special requirements"""
    def __init__(self, name, pay):
        Person.__init__(self, name, 'mgr', pay)                 #job name is implied
    def giveRaise(self, percent, bonus = .10):
        Person.giveRaise(self, percent + bonus)
if __name__ == '__main__':
    bob = Person('bob smith')
    sue = Person('sue jones', job = 'dev', pay = 10000)
    print(bob)
    print(sue)
    print(bob.lastName(), sue.lastName())
    sue.giveRaise(.10)
    print(sue)
    tom = Manager('Tom Jones' , 50000)
    tom.giveRaise(.10)
    print(tom.lastName())
    print(tom)