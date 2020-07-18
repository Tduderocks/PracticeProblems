import sys
import os
sys.path.append(os.getcwd())
from print3 import print3
print3(1,2,3)
print3(1,2,3, sep=' ')
print3(1,2,3, sep='...')
print3(1, [2], (3,), sep='...')     #various object types
print3(4,5,6, sep='' , end='')      #supress newline
print3(7,8,9)
print3()                            #add newline (or blank line)
import sys
print3(1,2,3, sep='??', end='.\n', file = sys.stderr)   #redirect to file
