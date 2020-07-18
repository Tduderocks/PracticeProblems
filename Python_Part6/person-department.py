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
class Department:
    def __init__(self, *args):
        self.members = list(args)
    def addMember(self, person):
        self.members.append(person)
    def giveRaises(self, percent):
        for person in self.members:
            person.giveRaise(percent)
    def showAll(self):
        for person in self.members:
            print(person)
if __name__ == '__main__':
    bob = Person('Bob smith')
    sue = Person('Sue Joens', job = 'dev', pay = 10000)
    tom = Manager('Tome jones', 50000)
    development = Department(bob, sue)                      #embeded objects in a composite
    development.addMember(tom)
    development.giveRaises(.10)                             #runs embedded obj give raises
    development.showAll()                                   #runs embedded objects __repr__