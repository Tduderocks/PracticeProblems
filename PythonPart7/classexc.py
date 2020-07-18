class General(Exception):pass
class Specific1(General):pass
class Specific2(General):pass
def raiser0():
    X = General()       #raise supercalls instance
    raise X
def raiser1():
    X=Specific1()       #raise sublcass instance
    raise X
def raiser2():
    X = Specific2()
    raise X             #raise diff. sublass instance
for func in (raiser0, raiser1, raiser2):
    try:
        func()
    except General:      #match general or any subclas of it
        import sys
        print('caught: %s' % sys.exc_info()[0])

