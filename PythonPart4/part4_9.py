#part 4 ex 9 works done:)
import math
#for loop
L = [2,4,9, 16, 25]
M=[]
for x in L : 
    M.append(math.sqrt(x))
print('for loop: ', M)
# map call
Y = [2,4,9,16,25]
N=[]
print('map:', list(map(math.sqrt, Y)))
#list comprehention
print('list comprehention:', [math.sqrt(a) for a in [2,4,9,16,25]])
#generator expression
print('generator expression:',list(math.sqrt(b) for b in [2,4,9,16,25]))