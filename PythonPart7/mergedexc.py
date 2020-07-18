sep = '-' * 45 +'\n'
print(sep + 'Exception caught and raised')
try:
    x='spam'[99]
except IndexError:
    print('except run')
finally:
    print('finally run')
print('after run')
print(sep + 'no excpetion raised')
try:
    x='spam'[3]
except INdexError:
    print ('except run')
finally:
    print('finally run')
print('after run')
print(sep + 'no exception raised, with esle')
try:
    x = 'spam'[3]
except IndexError:
    print('except run')
else:
    print('else run')
finally:
    print('finally run')
print('after run')
print (sep + ' exception raise but not caught')
try:
    x = 1/0
except IndexError:
    print('except run')
finally:
    print('finally run')
print('after run')