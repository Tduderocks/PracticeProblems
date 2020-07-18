class tracer:                       #page 1072/3 doent work, tracer not defined?
    def __init__ (self, func):      #remember origional, init counter
        self.calls = 0
        self.func = func
    def __call__ (self, *args):        #on later calls:add logic, run origional
        self.calls +=1
        print('call %s to %s' % (self.calls, self.func.__name__))
        return self.func(*args)
    #def tracers(func):
        #def oncall(*args):
           # oncall.calls +=1
           # print('call%s to %d' % (oncall.calls, func.__name__))
        #oncall.calls=0
        #return oncall

    @tracer     #same as spam = tracer(spam)
    def spam(a,b,c):            #wrap spam in a decorator object
        return a + b + c
    print(spam(1,2,3))      #really calls the tracer wrapper object
    print(spam('a','b','c'))        #invokes __call__in class