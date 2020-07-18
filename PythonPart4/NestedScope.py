X=99                #global scope name :not used
def f1():           
    X=88            #enclosing def local
    def f2():
        print(X)    #reference made in nested def
    f2()
f1()                #prints 88: enclosing def local