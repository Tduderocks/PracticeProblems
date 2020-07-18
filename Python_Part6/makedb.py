#import person                  load class with import
#bob = person.Person(...)       go through mod name
#from person import Person      laod class with from
#bob = Person(...)              use name directory
from person import Person, Manager      #load our classes
bob = Person('Bob smith')
sue = Person('Sue Jones', job = 'dev', pay =100000)
tom = Manager('Tom Jones', 50000)
import shelve
db = shelve.open('persondb')        #file name where obj are stored
for obj in (bob, sue, tom):         # use obj name attr as key
    db[obj.name] = obj              #store obj on shelve by key
db.close()                          #close after makiong chnages


