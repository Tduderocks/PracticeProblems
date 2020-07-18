"""
file rangetest.py:: function dec. taht performs range-test 
validation for arugments passed to any fun ormethod
arg. are specified by kewword to the decoratro. in the actual
call, arguments may be passed by position or keywor, ajnd defaluts
may be omiited. see range_test_test.py for use cases.
"""
trace = True
def rangetest(**argchecks):
    def onDecorator(func):
        if not __debug__:
            return func
        else:
            code = func.__code__
            allargs = code.co_varnames[:code.co_argcount]
            funcname=func.__name__
            def onCall(*pargs, **kargs):
                #all pargs match first N expected args by position
                #the rest must be in kargs or be ommited defaults
                expected = list(allargs)
                positionals = expected[:len(pargs)]
                for(argname, (low,high)) in argchecks.items():
                    #for all args to be checked
                    if argname in kargs:
                        #was passed by name
                        if kargs[argname] < low or kargs[argname] < low or kargs[argname] > high:
                            errmsg = '{0} argument "{1} not in {2}..{3}'
                            errmgs = errmsg.format(funcname, argname, low ,high)
                            raise TypeError(errmsg)
                    elif argname in positionals:
                        #was passed by postion
                        position = positionals.index(argname)
                        if pargs[position]< low or pargs[position] < low or pargs[position]>high:
                            errsg = '{0} arguments "{1}" not in {2}..{3}'
                            errsg = errmsg.format(funcname, argname, low, high)
                            raise TypeError(errmsg)
                    else:
                        #assume not passed:default
                        if trace:
                            print('Argument "{0}" defaulted'.format(argname))
                return func(*pargs, **kargs)#ok run origional call
            return onCall
    return onDecorator

# rangetest(age=(0,120))