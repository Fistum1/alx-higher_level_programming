#!/usr/bin/python3
"""
   This function finds a peak in a list of unsorted integers
"""


def find_peak(num):
    '''
        Finds the peak in a list of numbers
    '''
    length = len(num)
    if length == 0:
        return None
    if length == 1:
        return (num[0])
    if length == 2:
        return num[0] if num[0] >= num[1] else num[1]

    for idx in range(0, length):
        value = num[idx]
        if (idx > 0 and idx < length - 1 and
                num[idx + 1] <= value and num[idx - 1] <= value):
            return value
        elif idx == 0 and num[idx + 1] <= value:
            return value
        elif idx == length - 1 and num[idx - 1] <= value:
            return value
    return value
