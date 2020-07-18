#sumtree
def sumtree(L):
    tot = 0 
    for x in L:                             #for each item at this level
        if not isinstance(x, list):
            tot +=x                         #adds numbers directly
        else:
            tot += sumtree(x)               #recur for sublists
    return tot
L= [1, [2, [3, 4], 5], 6, [7, 8]]             #arbitrary nesting
print (sumtree(L))                          #prints 36
#pathological cases
print(sumtree([1, [2, [3, [4, [5]]]]]))       #prints 15(right-heavy)
print(sumtree([[[[[1], 2],3],4],5]))         #prints 15 (left-heavy)
#ques and stacks
def sumtree2(M):
    tot2 = 0
    items = list(M)
    while items:
        front = items.pop(0)
        if not isinstance(front, list):
            tot2 += front
        else:
            items.extend(front)
    return tot2
