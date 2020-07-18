#chapter 10 page 340 exmaple
while True:
    reply = input('Enter text: ')
    if reply =='stop':break
    #print(reply.upper()) prints the reply in uppercase letters
    elif not reply.isdigit():
        print('Bad!'*8)
    else:
        num = int(reply)
        if num <20:
            print ('low')
        else:
            print(int(reply)**2)
print('Bye')