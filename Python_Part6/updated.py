import shelve
db = shelve.open('persondb')        #reopen shelve with same file name
for key in sorted (db):             #iterate to display database objects
    print(key, '\t=>', db[key])     #prints with custom format
sue = db['Sue Jones']               #index by key to fetch
sue.giveRaise(.10)                  #update in memory using class's method
db['Sue Jones'] = sue               #assign to key to update in shelve
db.close()                          #close after making changes
