"""
part 3 excersie 4
rewrite:
L=[1,2,4,8,16,32,64]
X=5
found = False
i = 0
while not found and i < len(L):
    if 2**X ==L[i]:
        found = True
    else:
        i = i+1
if found:
    print('at index', i)
else: 
    print(X, 'not found')
    """
#part a: works
L=[1,2,4,8,16,32,64]
X=5
i=0
while i<len(L):
    if 2**X == L[i]:
        print('index at', i)
        break
    i +=1 #needed
else: 
    print( X,'not found')
#part b:
for i in L:
    if 2**X == i:
        print('index at', L.index(i))
        break
    i +=1 #needed
else: 
    print( X,'not found')
#part c
if 2**X in L: print('index at ', L.index(2**X)) 
else: print(X, 'not found')
#part d:
Y = 5
M = []
for j in range(7):
    M.append(2**j)
print(M)
if 2**Y in M:
    print((2**Y), 'was found at ', M.index(2**Y))
else: print(Y, 'not found')
#part e
S = 2**X 
#part f
A=list(map(lambda X: 2**X, range(7)))
print(A)
if S in A:
    print(S, 'was found at', A.index(S))
else: print(X, 'not found')