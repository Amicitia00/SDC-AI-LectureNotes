#include <stdio.h>
#include "dice_fight.h"
#include "random_generator.h"

#define MAX		6
#define MIN		1

int dice_number = 0;

void roll_dice(void)
{
	dice_number = generate_random(MIN, MAX);
}

void dice_fight(char player1[], char player2[])
{
	printf("%s, %s�� �ֻ��� ������ ���۵˴ϴ�.\n", player1, player2);

	int roll_player1 = roll_dice();
	int roll_player2 = roll_dice();

	if (roll_player1 > roll_player2)
	{
		printf("%s�� �¸��Դϴ�.\n", roll_player1);
	}

	if (roll_player2 > roll_player2)
	{
		printf("% s�� �¸��Դϴ�.\n", roll_player2);
	}

	if (roll_player1 == roll_player2)
	{
		printf("���º��Դϴ�.\n");
	}
}