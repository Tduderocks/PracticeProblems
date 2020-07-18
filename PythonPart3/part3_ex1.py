"""
part a: for loop that prints characters using s as their ASCII number
works :) done :)
"""
S='apples'
for x in S:
    #if x=='s':
        print('part a: ', ord(x))
#part b - add the ASCII numbers together. works :) done
T = 'apples'
sum = 0
for x in T:
        number = ord(x)
        sum= sum + number
print ('part b: ', sum)

#part c - returns a new list of the asc11 codes of each character in the string
L = 'apples'
N = []
for x in L:
        N.append(ord(x))
print('part c: ', N)
print('map(ord, S) no: ', map(ord,S))  #correct list(map(ord,S)) would work
print('ord(c) for c in S: yes: ', [ord(c) for c in S]) #correct 