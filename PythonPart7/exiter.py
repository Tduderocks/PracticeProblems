import sys
def bye():
    sys.exit(40)            #crucaial error : abort now!
try:
    bye()
except:
    print('got it')         #oops we ignored the exit
print('continuing...')
