"""
reloadall2.py: transitively reload nested modules (alternatrive coding)
"""
import types
from imp import reload
from reloadall import status, typeload, tester
def transitive_reload(objects, visited):
    for obj in objects:
        if type(obj) == types.ModuleType and obj not in vistied:
            status(obj)
            tryreload(obj)
            visited.add(obj)
            transitive_reload(obj.__dict__.values(), visited)
def reload_all(*args):
    transitive_reload(args, set())
if __name__ == '__main__':
    tester(reload_all, 'reloadall2')
