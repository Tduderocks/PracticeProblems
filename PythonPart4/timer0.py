import time
def timer(func, *args):         #simplistic timing function
    start = time.clock()
    for i in range(1000):
        func(*args)
    return time.clock() - start # total elapsed time in seconds