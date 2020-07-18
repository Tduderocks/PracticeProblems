def permute1(seq) :
    if not seq:         #suffle any sequence: list
        return[seq]     #empty sequence
    else:
        res = []
        for i in range(len(seq)):
            rest = seq[:i] + seq[i +1:]     #delete current node
            for x in permute1(rest):        # permute the others
                res.append(seq[i:i+1] + x)  #add notd at front
        return res
def permute2(seq):
    if not seq:                         #shuffle any sequence:generator
        yield seq                       #empty sequence
    else:
        for i in range(len(seq)):
            rest = seq[:i] + seq[i +1:]     #delete current node
            for x in permute2(rest):        #permute the others
                yield seq[i:i+1] + x        #add node at front
