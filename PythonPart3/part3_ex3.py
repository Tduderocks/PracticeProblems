"""
write a for loop that prints a dictionaries items in accending order
"""
D={'a':6, 'd':8, 'apple':10, 'b':2}
for key in sorted(D):
    print(key, '=>', D[key])

