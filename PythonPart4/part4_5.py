#part 4 ex 5 works:)
def copyDict(dict):
    #copy a dictionary
    return dict.copy() 
print(copyDict({'a':10, 'b':12}))
"""no you cannot use dict[:] since you cannot slice a dictinoary since it is a set which is not ordered:
def copyDict2(dictionary):
    new = dictionary{:}
    return new
print(copyDict2({'apples':20, 'bananas':34}))"""
#part 4 ex 6
#only returning keys..
def addDict(dict1,dict2):
    combined = dict1.keys() | dict2.keys()
    return combined
print(addDict({'steve':78, 'Theresa':5}, {'bob':10, 'sally':12})) 
