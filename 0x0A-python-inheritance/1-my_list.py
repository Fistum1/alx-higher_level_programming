#!/usr/bin/python3
"""This calss inherits from a list class"""


class MyList(list):
    """A module that inherits from a give list"""
    def print_sorted(self):

        print(sorted(self))

