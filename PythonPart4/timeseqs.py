"Test the relattive speed of iteration tool alternatives."
import sys, timer               #import timer functions
reps =10000
repslist = list(range(reps))        #hoise out, list in both 2x/3x
def forLoop():
    res = []
    for x in repslist:
        res.append(abs(x))
    return res
def listComp():
    return[abs(x) for x in repslist]
def mapCall():
    return list(map(abs, repslist))             #use list here in 3x only
#return map(abs, resplist)
def genExpr():
    return list(abs(x) for x in repslist)       #list() required to force results
def getFunc():
    def gen():
        for x in repslist:
            yield abs(x)
    return list(gen())              #list () required to force results
print(sys.version)
for test in (forLoop, listComp, mapCall, genExpr, getFunc):
    (bestof, (total,result)) = timer.bestoftotal(5, 1000, test)
    print ('%-9s: %.5f => [%s...%s]' % 
            (test.__name__, bestof, result[0], result[-1]))
            