#!/usr/bin/python3
def max_integer(my_list=[]):
    if my_list is None or len(my_list) == 0:
        return None
    largest = my_list[0]
    for num1 in my_list:
        if num1 > largest:
            largest = num1
    return largest
