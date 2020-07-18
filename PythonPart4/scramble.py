def scramble(seq):
    for i in range(len(seq)):                       #generator functin
        yield seq[i:] + seq[:i]                     # yield one item per iteration

scramble2 = lambda seq: (seq[i:] + seq[:i] for i in range(len(seq)))
