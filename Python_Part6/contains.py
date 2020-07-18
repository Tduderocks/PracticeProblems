class Iters:
        def __init__ (self, value):
                self.data = value
        def __getitem__(self, i):
            print('get[%s]:' % i, end= ' ' )    #fallback for iteration. also for index, slice
            return self.data[i]
        def __iter__(self):
            print('iter=> ' , end=' ')          #preffered for iteration. allows only one active iterator
            self.ix = 0
            return self
        def __next__ (self):
            print('next:', end=' ')
            if self.ix ==len(self.data): raise StopIteration
            item = self.data[self.ix]
            self.ix +=1
            return item
        def __contains__ (self, x):
            print('contains: ', end=' ')        #prefereed for in
            return x in self.data
        next = __next__
if __name__ =='__main__':
    X = Iters([1,2,3,4,5])  #make instance
    print(3 in X)
    for i in X:
        print(i, end= ' | ')
    print()
    print([i **2 for i in X])
    print( list(map(bin, X)))
    I = iter(X)
    while True:
        try:
            print(next(I), end= '@')
        except StopIteration:
            break