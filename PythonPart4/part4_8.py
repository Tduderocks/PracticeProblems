#part 4 ex 8
def IsPrime(y): 
    y = abs(y)
    x = y // 2              # for some y>1
    while x > 1:   
        if y % x == 0:      #remainder
            print(y, 'has factor', x)
            break           #skip else
        x -=1
    else:                   #normal exit
        print(y, 'is prime')
IsPrime(13)
IsPrime(13.0)
IsPrime(15)
IsPrime(15.0)
IsPrime(0)
IsPrime(1)
IsPrime(-7)
#if y==0 or y== 1 : print(y, 'in not prime or composite')
   
