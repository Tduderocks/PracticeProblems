def oops():
    try: 
        'theresa'[8]
    except: 
        raise IndexError
        print('theresa[8] is an index error')
oops()

