
#doesnt work
#example 2
"""
class dec. with priv. and pub. attr. declar.
controls external access to attr. stored on ana instance or
inherited by it from its classes. priv. declares attr names
that cannot be teched or ass. outside teh dec. class,
and public declares all the names that can
caveat: this works in 3x for expliicitly named attr. only: _x_
op. overloading methods implicilty run for built in op
do not trigger either _getattr_ or _getatrtribute_ in newstyple
classes. add _x_methods here to intercept and delegate buiolt ints
"""
traceMe = False
def trace(*args):
    if traceMe: print('[' + ' '.join(map(str, ags)) + ']')
    def accessControl(failif):
        def onDecorator(aClass):
            class OnInstance:
                def __init__ (self, *args, **kargs):
                    self.wrapped = aClass(*args, **kargs)
                def __getattr__ (self, attr):
                    trace('get:', attr)
                    if failif(attr):
                        raise TypeError('private attribute fetch: ' +attr)
                    else: return getattr(self.__wrapped, attr)
                def __setattr__(self, attr, value):
                    trace('set:', attr, value)
                    if attr =='_OnInstance__wrapped':
                        self.__dict__[attr] = value
                    elif failif(attr):
                        raise TypeError('private attribute change: ' +attr)
                    else:
                        setattr(self.__wrapped, attr, value)
        return OnInstance
    return onDecorator
def Private(*attributes):
    return accessControl(failif=(lambda attr: attr in attributes))
def Public(*attributes):
    return accessControl(failif = (lambda attr: attr not in attributes))