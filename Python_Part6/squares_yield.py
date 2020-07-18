class Squares:
    def __init__ (self, start, stop):       #iter__ + yield generator
        self.start = start                  #next__ is autoamically implied
        self.stop = stop
    def __iter__ (self):                        #could be called def gen or __iter__
        for value in range(self.start, self.stop +1):
            yield value **2
            
