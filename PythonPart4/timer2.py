"""
total(spam, 1,2, a=3, b=4, _reps=1000) calls and tiems spam(1,2, a=3, b=4)_
reps times, and returns total time for all runs, with final result.

bestof(spam,1,2,a=3, b=4, _reps=5) runs best-of-N timer to atttempt to 
fileter out system load variation ,and returns best time among _reps tests.

bestoftotal(spam, 1,2 a=3, b=4, _reps1=5, _reps=1000) runs best-of-totals
test, which takes the best amoun _reps1 runs of (the total of _reps runs);
"""
import time, sys
timer = time.clock if sys.platform[:3] == 'win' else time.time
def total(func, *pargs, **kargs):
    _reps = kargs.pop('_reps', 10000)           #passed in or default reps
    repslist = list(range(_reps))               #hoist range out for 2x lists
    start = timer()
    for i in repslist:
        ret = func(*pargs, **kargs)
    elapsed = timer() - start
    return (elapsed, ret)
def bestof(func, *pargs, **kargs):
    _reps = kargs.pop('_reps', 5)
    best = 2 ** 32
    for i in range(_reps):
        start = timer()
        ret = func(*pargs, **kargs)
        elapsed = timer() - start
        if elapsed < best: best = elapsed
    return (best, ret)
def bestoftotal(func, *pargs, **kargs):
    _reps1= kargs.pop('_reps1', 5)
    return min(total(func, *pargs, **kargs) for i in range(_reps1))
    #works