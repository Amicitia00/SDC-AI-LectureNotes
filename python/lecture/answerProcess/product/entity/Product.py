from dataclasses import dataclass
from sqlalchemy import Column, String, Integer, ForeignKey
from sqlalchemy.orm import declarative_base, relationship

from account.entity.Account import Account

Base = declarative_base()


@dataclass
class Product(Base):
    __tablename__ = 'products'

    __id = Column(Integer, primary_key=True, autoincrement=True, name="id")
    __name = Column(String, nullable=False, name="name")
    __price = Column(Integer, nullable=False, name="price")
    __details = Column(String, name="details")

    __registeredBy = Column(Integer, ForeignKey('account.id'), nullable=False, name="registered_by")

    def __init__(self, name: str, price: int, details: str, registeredBy: Account):
        self.__name = name
        self.__price = price
        self.__details = details
        self.__registeredBy = registeredBy

    def getName(self):
        return self.__name

    def getPrice(self):
        return self.__price

    def getDetails(self):
        return self.__details

    def getRegisteredBy(self):
        return self.__registeredBy

