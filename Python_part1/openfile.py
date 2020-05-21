myfile11=open('myfile11.txt','a')
myfile11.write('im adding new text\n')
myfile11.close()
file = open('myfile11.txt','r')
for line in file:
    print(line)
file.close()