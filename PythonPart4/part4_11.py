#part 4 example 11 recursion works:)
def countdown(x):
    while x>0:
        print(x)
        return(countdown(x-1))
    print('stop')
(countdown(5))
    