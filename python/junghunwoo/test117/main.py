import pandas as pd

class Card:
    def __init__(self, id, type, name, image_path, characteristic, skill1, skill2, skill3, health, attack):
        self.id = id
        self.type = type
        self.name = name
        self.image_path = image_path
        self.characteristic = characteristic
        self.skill1 = skill1
        self.skill2 = skill2
        self.skill3 = skill3
        self.health = health
        self.attack = attack

    def save_to_excel(self, file_path):
        data = {
            "id": [self.id],
            "type": [self.type],
            "name": [self.name],
            "image path": [self.image_path],
            "characteristic": [self.characteristic],
            "skill 1": [self.skill1],
            "skill 2": [self.skill2],
            "skill 3": [self.skill3],
            "health": [self.health],
            "attack": [self.attack]
        }

        df = pd.DataFrame(data)
        df.to_excel(file_path, index=False)

    @classmethod
    def load_from_excel(cls, file_path):
        df = pd.read_excel(file_path)
        card_data = df.to_dict(orient="records")[0]
        return cls(**card_data)

if __name__ == '__main__':
    # 저장
    card = Card(0, "기계","우주모함", "card/machine/unit/1/image/card1.png",
                "Characteristic 1", "Skill 1", "Skill 2", "Skill 3", 20, 20)
    card.save_to_excel("card_data.xlsx")

    # 불러오기
    loaded_card = Card.load_from_excel("card_data.xlsx")
    print(loaded_card.name)

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
