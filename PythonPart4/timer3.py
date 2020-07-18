"""
same usage as timer2.py, but uses 3x keyword-only default arguments
instead of dict pops for simpler code. no need to hoist range() out
of tests in 3x: always a generatro in 3x, and this cant run on 2x
"""
import time, sys
timer = time.clock if sys.platform[:3] == 'win' else time.time
def total(func, *pargs, _reps=1000, **kargs):
    start = timer()
    for i in range(_reps):
        ret = func(*pargs, **kargs)
    elapsed = timer() - start
    return(elapsed, ret)
def bestof(func, *pargs, _reps = 5, **kargs):
    best = 2**32
    for i in range(_reps):
        start = timer()
        ret = func(*pargs, **kargs)
        elapsed = timer() - start
        if elapsed < best: best = elapsed
    return( best, ret)
def bestoftotal(func, *pargs, _reps1=5, **kargs):
    return min (total(func, *pargs, **kargs) for i in range(_reps1))
    #works