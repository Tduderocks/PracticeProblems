def f1():
    X=88
    def f2():
        print(X)        #remembers x in enclosing def scope
    return f2           #return f2 but dont call it
action = f1()           #make, return function
action()                #call it now: prints 88
#why can't you just call f1()?jj