class Squares:
        def __init__ (self, start, stop):       #save state when created
            self.value = start -1
            self.stop = stop
        def __iter__ (self):        #get iterator obj on inter
            return self
        def __next__(self):
            if self.value == self.stop:     #also called by next built in
                raise StopIteration
            self.value += 1
            return self.value ** 2
            