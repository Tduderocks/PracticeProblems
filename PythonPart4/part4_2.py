#part 4 ex 2 works:)
def adder(x,y):
    return (x+y)
print(adder(4,5))
print(adder('hello','goodbye'))
print(adder(8.4,9.2))
print(adder((3,4),(7,9)))
#dictionaries cannot be added with a plus sign
#{'a':7, 'b':9}{'c':5, 'd':8} 
#part 4 ex 3
def adder2(*x):
    return (x+x)
print(adder2(4,5,6)) 
#doesn't work