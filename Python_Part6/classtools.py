#file classtools.py(new)
"Assorted class utiliites and tools"
class AttrDisplay:
    """
    Providews an inheritable display overload method that shows
    instances with their class names and a name=value pair for 
    each attribute stored on the instance itself(but not attrs
    inherited from its classes). can be mixed inot oany class,
    and will work on any instance.
    """
    def gatherAttrs(self):
        attrs=[]
        for key in sorted(self.__dict__):
            attrs.append('%s=%s' % (key, getattr(self, key)))
        return ', '.join(attrs)
    def __repr__(self):
        return '[%s: %s]' % (self.__class__.__name__, self.gatherAttrs())
if __name__ =='__main__':
    class TopTest(AttrDisplay):
        count = 0
        def __init__(self):
            self.attr1 = TopTest.count
            self.attr2 = TopTest.count+1
            TopTest.count +=2
    class SubTest(TopTest):
        pass
    X,Y = TopTest(), SubTest()              #make two instances
    print(X)                                # show all instance attrs
    print(Y)                                #show lowest class name
    