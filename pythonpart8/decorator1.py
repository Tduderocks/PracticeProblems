#defines & applies a func. dec. that counts the number of calls makde to the func.
class tracer:
    def __init__ (self, func):  #on @decoration: save orig. func.
        self.calls = 0
        self.func = func
    def __call__ (self, *args):
        self.calls +=1              #on later calls:run origional func
        print('call %s to %s' % (self.calls, self.func.__name__))
        self.func(*args)
@tracer
def spam(a,b,c): #spam=tracer(spam)
    print(a+b+c) #wraps spam in a dec. obj.
