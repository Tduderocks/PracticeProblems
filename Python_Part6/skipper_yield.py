class SkipObject:           #another _iter_ + yield generator
    def __init__ (self,wrapped):    #instance scope retained normally
        self.wrapped = wrapped          #local scope state saved auto
    def __iter__(self):
        offset = 0
        while offset < len(self.wrapped):
            item = self.wrapped[offset]
            offset += 2
            yield item