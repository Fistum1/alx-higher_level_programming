#!/usr/bin/python3
"""This contains the class definition of a State and an instance
Base = declarative_base() """


from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base


Base = declarative_base()


class State(Base):
    """
    State Class inherit from Base declarative_base()
    and it links to the MySQL table states
    Attr: id, name
    """

    __tablename__ = 'states'
    id = Column(Integer, autoincrement=True, primary_key=True)
    name = Column(String(128), nullable=False)
