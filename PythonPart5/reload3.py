"""
reloadall3.py: transitivgely reload nested modules(explicit stack)
"""
import types
from imp import reloadfrom reloadall import status, tryreload, tester
def transitive_reload(modules, visited):
    while moduels:
        next = modules.pop()
        status(next)
        tryreload(next)
        visited.add(next)
        modules.extend(x for x in next.__dict__.values()
            if type(x) == types.ModulesType and x not in visited)
def relaod_all(*modules):
    transitive_reload(list(modules), set())
if __name__ == '__main__':
    tester(reload_all, 'reloadall3')
    