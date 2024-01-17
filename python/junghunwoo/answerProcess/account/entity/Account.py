from dataclasses import dataclass
from sqlalchemy import Column, String, Integer
from sqlalchemy.orm import declarative_base
from passlib.hash import pbkdf2_sha256
# pip3 install passlib

# entity에서 만들 때 넣어야 될 코드 db추적을 할 떄 사용된다 한다
Base = declarative_base()


@dataclass
class Account(Base):
    __tablename__ = 'account'

    __id: int = Column(Integer, primary_key=True, autoincrement=True, name="id")
    __accountId: str = Column(String, name="account_id")
    __password: str = Column(String, name="password")

    def __init__(self, accountId: str, password: str):
        self.__accountId = accountId
        self.__password = pbkdf2_sha256.hash(password)

    def checkPassword(self, password):
        return pbkdf2_sha256.verify(password, self.__password)

    def getId(self):
        return self.__id

    def getAccountId(self):
        return self.__accountId

    def getPassword(self):
        return self.__password

    # 비밀번호 변경
    def setPassword(self, password):
        self.__password = password

