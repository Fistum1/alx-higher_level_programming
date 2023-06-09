#!/usr/bin/python3
def multiple_returns(sentence):
    if len(sentence) == 0:
        t1 = len(sentence), None
        return t1
    t1 = len(sentence), sentence[0]
    return t1

