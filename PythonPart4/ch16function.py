"""
chapter 16 function
"""
def intersect(seq1,seq2):
        res =[]             #start empty
        for x in seq1:      #scan seq1
            if x in seq2:   #common item?
                res.append(x)   #add to end
        return res
s1 = 'spam'
s2 = 'scam'
print(intersect(s1,s2))     #test the function
#or
print([x for x in s1 if x in s2]) # works:)
y = intersect([1,2,3],(1,4))    # illustrates polymorphism aka duck quacks
print(y)                        # s1 has to support for loop & s2 has to support 'in' membership

