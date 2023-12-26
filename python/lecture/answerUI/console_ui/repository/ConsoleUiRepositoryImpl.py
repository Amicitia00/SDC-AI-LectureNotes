import os
from datetime import datetime, timedelta

from console_ui.entity.ConsoleUiRoutingState import ConsoleUiRoutingState
from console_ui.entity.ConsoleUiState import ConsoleUiState
from console_ui.entity.Session import Session
from console_ui.repository.ConsoleUiRepository import ConsoleUiRepository
from custom_protocol.entity.CustomProtocol import CustomProtocol


class ConsoleUiRepositoryImpl(ConsoleUiRepository):
    __instance = None
    __session = None

    __uiMenuTable = {}
    __uiSelectDecisionTable = {}

    __uiProperCommandConvertTable = {}

    INFO_FILE_PATH = 'localStorage/info.txt'

    def __new__(cls):
        if cls.__instance is None:
            cls.__instance = super().__new__(cls)

            cls.__instance.__readSessionInfoFromFile()

            cls.__instance.__uiMenuTable[ConsoleUiRoutingState.NOTHING.value] = cls.__instance.__printDefaultMenu
            cls.__instance.__uiSelectDecisionTable[ConsoleUiRoutingState.NOTHING.value] = cls.__instance.__selectDecisionFromUserChoice
            cls.__instance.__uiProperCommandConvertTable[ConsoleUiRoutingState.NOTHING.value] = cls.__instance.__routingStateNothingConverter
        return cls.__instance

    def __init__(self):
        print("ConsoleUiRepository 초기화 동작")

        self.__consoleUiState = ConsoleUiState()

    @classmethod
    def getInstance(cls):
        if cls.__instance is None:
            cls.__instance = cls()
        return cls.__instance

    def saveCurrentRoutingState(self, currentState):
        self.__consoleUiState.setCurrentRoutingState(currentState)

    def acquireCurrentRoutingState(self):
        return self.__consoleUiState.getCurrentRoutingState()

    # 현재 시점에 약간 애매함
    def saveRequestFormToTransmitQueue(self):
        pass

    def findRoutingStateFromUserChoice(self, userChoice):
        currentRoutingState = self.__consoleUiState.getCurrentRoutingState()
        print(f"currentRoutingState: {currentRoutingState}")
        print(f"currentRoutingState.value: {currentRoutingState.value}")
        selectDecider = self.__uiSelectDecisionTable[currentRoutingState.value]
        print(f"selectDecider: {selectDecider}")
        return selectDecider(userChoice)

    def __selectDecisionFromUserChoice(self, userChoice):
        print(f"__selectDicisionFromUserChoice() - userChoiceType: {type(userChoice)}")
        if self.__session is None:
            if userChoice == 1:
                return ConsoleUiRoutingState.ACCOUNT_REGISTER

            if userChoice == 2:
                return "This is case 2"

            if userChoice == 3:
                return "This is case 3"

            if userChoice == 4:
                return "This is case 4"


    def printMenu(self):
        currentRoutingState = self.__consoleUiState.getCurrentRoutingState()

        menuPrinter = self.__uiMenuTable[currentRoutingState.value]
        menuPrinter()

    def __printDefaultMenu(self):

        if self.__session is None:
            print("1. 회원 가입")
            print("2. 로그인")
            print("3. 상품 리스트 조회")
            print("4. 종료")
            return

        print("1. 로그아웃")
        print("2. 상품 리스트 조회")
        print("3. 주문 내역 조회")
        print("4. 종료")

    def convertUserChoiceToProperRouting(self, userChoice):
        currentRoutingState = self.__consoleUiState.getCurrentRoutingState()
        print(f"ConsoleUiRepository currentRoutingState: {currentRoutingState}")

        properCommandConverter = self.__uiProperCommandConvertTable[currentRoutingState.value]
        return properCommandConverter(userChoice)


    def __routingStateNothingConverter(self, userChoice):
        print(f"ConsoleUiRepository __routingStateNothingConverter(): userChoice: {userChoice}")
        if self.__session is None:
            if userChoice == 1:
                print("ACCOUNT_REGISTER")
                return CustomProtocol.ACCOUNT_REGISTER.value

            if userChoice == 2:
                print("ACCOUNT_LOGIN")
                return CustomProtocol.ACCOUNT_LOGIN.value

        if userChoice == 1:
            print("ACCOUNT_LOGOUT")
            return CustomProtocol.ACCOUNT_LOGOUT.value

    def __readSessionInfoFromFile(self):
        info_file_path = os.path.join(os.getcwd(), self.INFO_FILE_PATH)

        if os.path.exists(info_file_path):
            with open(info_file_path, 'r') as file:
                content = file.read().strip()

            if content.isdigit():
                sessionId = int(content)
                self.__session = Session(sessionId)
        else:
            with open(info_file_path, 'w') as file:
                file.write("")

    def setUserSession(self, sessionId):
        self.__session = Session(sessionId)
        self.__writeSessionInfoToFile(sessionId)

    def __writeSessionInfoToFile(self, sessionId):
        try:
            with open(self.INFO_FILE_PATH, 'w') as file:
                file.write(str(sessionId))
        except Exception as e:
            print(f"파일에 세션 작성 중 에러 발생: {e}")



