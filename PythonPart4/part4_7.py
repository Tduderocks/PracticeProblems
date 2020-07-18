#part 4 ex 7
def f1(a,b): print (a,b)            #normal args
def f2(a, *b): print(a,b)           #positional varargs
def f3(a, **b): print(a,b)          #keyword varargs
def f4(a, *b, **c): print (a,b,c)   #mixed modes
def f5(a, b=2, c=3) : print(a,b,c)  #defaults
def f6(a, b=2, *c): print(a,b,c)    #defaults and positional vargars

f1(1,2)                             # 1 2 using position
                                    #correct :)
f1(b=2, a=1)                        # 1 2 using keyword
                                    # correct :)
f2(1,2,3)                           # 1 (2,3)  using position collecting b as a tuple
                                    # correct :) 
f3(1, x = 2, y=3)                   # 1 (2,3)  using postitional and then keyworld collecting b as a tuple
                                    # 1 {'x':2, 'y':3} becasue ** returns dictionaries
f4(1,2,3,x=2,y=3)                   # 1 (2,3), (2,3) using positional, then collecting pos as tuple, then collecting keyword as tuple
                                    # 1 (2,3) {'x':2, 'y':3} because ** returns dictionaries
f5(1)                               # 1 2 3 because 1 is positinoal and then defaults for c and c
                                    # correct:)
f5(1,4)                             # 1 4 3 because 1 and 4 override defalt then c is default
                                    #correct :)
f6(1)                               # 1 2           posititioanl and then defalut
                                    # 1 2 ()         because tuple needs to be returned for c but its empty
f6(1,3,4)                           # 1 3 (4,)    positional, default is overrided,4 is collected as tupple
                                    # correct :)