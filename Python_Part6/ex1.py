class Adder:
    def __init__ (self, x, y):
        self.x = x
        self.y = y
    def add(self, x, y):
        print('not impimented')
class ListAdder(Adder):
    def add(self, x, y):
        return self.x + self.y
class dictAdder(Adder):
    def add(self,x, y):
        return self.x +self.y
x=4
y=5
print(ListAdder.add(x,y)
