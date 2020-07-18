#-*- coding: latin-1 -*-
#any of the following strin glieral froms work in latin-1
#changing the encoding above to either ascii or utf-8 fails,
#becasue the 0xc4 and 0xc8 in mystr1 are not valid either

#i cant do string one
myStr2='A\u00c4B\U000000e8C'
myStr3 = 'A' + chr(0xC4) + 'B' + chr(0xE8) + 'C'
import sys
print('Default encoding:' , sys.getdefaultencoding())
for aStr in myStr2, myStr3:
    print ('{0}, byteslen2 = {1}'.format(aStr, len(aStr)), end=' ')
    bytes1 = aStr.encode()
    bytes2 = aStr.encode('latin-1')
    #bytes 3 = aStr.encode(ascii') fails
    print('byteslen1={0}, byteslen2={1}'.format(len(bytes1), len(bytes2)))
