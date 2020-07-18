class Super:
    def method(self):
        print('in super.method')
    def delegate(self):
        self.action()
class Inheritor(Super):
    pass
class Replacer(Super):
    def method(self):
        print('in replacer.method')
class Extender(Super):
    def method(self):
        print('starting extendor.method')
        Super.method(self)
        print('Ending extendor.method')
class Provider(Super):
    def action(self):
        print('in providor.action')
if __name__ =='__main__':
    for klass in (Inheritor, Replacer, Extender):
        print('\n ' + klass.__name__ + '...')
        klass().method()
    print('\nProvider...')
    x = Provider()
    x.delegate()