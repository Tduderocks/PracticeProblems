#!python file isinstance.py
class ListInstance:
    """
    mix in class that provides a fromateed print() or str() of instance via
    inheritance of __str__ coded here; displays instance attr only; self is 
    instance of lowest class; __x names avoid clasing with clients attr
    """
    def __attrnames(self):
        result = ' '
        for attr in sorted(self.__dict__):
            result += '\t%s=%s\n' % (attr, self.__dict__[attr])
        return result
    def __str__(self):
        return '<Instance of %s, address %s:\n%s>' % (
                                self.__class__.__name__,
                                id(self),
                                self.__attrnames())
if __name__ =='__main__':
    import testmixin
    testmixin.tester(ListInstance)