X=99
def setX(new):
    global X    #accessors make external changes explicit
    X=new       # and can manage access in a sinlge place
    

print ('first x:' , X)