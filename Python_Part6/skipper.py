class SkipObject:
        def __init__ (self, wrapped):
            self.wrapped = wrapped      # save item to be used
        def __iter__ (self):
            return SkipIterator(self.wrapped)   # new iterator each time
class SkipIterator:
    def __init__ (self, wrapped):
        self.wrapped = wrapped          #iterator state information
        self.offset = 0
    def __next__(self):
        if self.offset >= len(self.wrapped):    #terminate iterations
            raise StopIteration
        else:
            item = self.wrapped[self.offset]
            self.offset +=2                     # else return and skip
            return item
if __name__ == '__main__':
        alpha = 'abcdef'
        skipper = SkipObject(alpha)     #make container obj
        I = iter(skipper)               #make an iterator on it
        print(next(I), next(I), next(I))    #visit offset 0,2,4
        for x in skipper :       #for calls __iter__automatically
            for y in skipper:           #nested for call__iter__again each time
                print(x+y, end=' ')     #each iterator has its own state , offset

