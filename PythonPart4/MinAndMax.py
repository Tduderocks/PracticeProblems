#minimum
def min1(*args):
    res = args[0]
    for arg in args[1:]:
        if arg < res:
            res=arg
    return res
def min2(first, *rest):
    for arg in rest:
        if arg < first:
            first = arg
    return first
def min3(*args):
    tmp=list(args)
    tmp.sort()
    return tmp[0]
print(min1(3,4,1,2))
print(min2("bb","aa"))
print(min3([2,2],[1,1],[3,3]))
#maximum works:)
def max1(*args):
    res = args[0]
    for arg in args[1:]:
        if arg > res:
            res=arg
    return res
def max2(first, *rest):
    for arg in rest:
        if arg > first:
            first = arg
    return first
def max3(*args):
    tmp=list(args)
    tmp.sort()
    return tmp[-1]
print(max1(3,4,1,2))
print(max2("bb","aa"))
print(max3([2,2],[1,1],[3,3]))
#minOrMax
def minmax(test, *args):
    res = args[0]
    for arg in args[1:]:
        if test(arg,res):
            res = arg
    return res
def lessThan(x,y): return x<y
def GrtrThan(x,y): return x> y
print(minmax(lessThan, 4, 2, 1, 5, 6, 3)) #lessthan is going in place of test
print(minmax(GrtrThan, 4, 2, 1, 5, 6, 3))
