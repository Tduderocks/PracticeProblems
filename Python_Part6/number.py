class Number:
    def __init__(self,start):
        self.data = start           #on number start
    def __sub__(self,other):        #on instance other
        return Number(self.data - other)    #result is a new instance