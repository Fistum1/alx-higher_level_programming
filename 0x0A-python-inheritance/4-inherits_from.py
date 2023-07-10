#!/usr/bin/python3
"""if object is an instof a class that inherited """


def inherits_from(obj, a_class):
    """Returns true if object is inherited """
    return (issubclass(type(obj), a_class) and type(obj) != a_class)

