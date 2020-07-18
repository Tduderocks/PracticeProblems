var = 99        #global variable ==module attribute
def local():
    var = 0     #change local var
def glob1():
    global var  #declare global(normal)
    var +=1     #change global var
def glob2():
    var = 0     #change local var
    import sys
    import os
    sys.path.append(os.getcwd())
    import thismod  #import myself
    thismod.var += 1    #change global var
def glob3():
    var = 0     #change local var
    import sys  #import system table
    glob = sys.modules['thismod']   #get mod object(or use__name__)
    glob.var += 1   #change global var
def test():
    print (var)
    local(); glob1(); glob2(); glob3()
    print(var)
    #end result: adds 3 to the global variable . only the fist functions does not impact it.
