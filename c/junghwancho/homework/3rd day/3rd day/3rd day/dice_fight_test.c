#include <stdio.h>
#include "dice_fight.h"
#include "random_generator.h"

#define MAX		6
#define MIN		1

int dice_number = 0;
int dice_number = 0;

int roll_dice(void)
{
	return generate_random(MIN, MAX);
}


void dice_fight_test(char player1[], char player2[])
{
	printf("%s, %s�� �ֻ��� ������ ���۵˴ϴ�.\n", player1, player2);

	int roll_player1 = roll_dice();
	int roll_player2 = roll_dice();

	printf("%s�� �ֻ��� ��ȣ�� %d �Դϴ�.\n", player1, dice_number);
	printf("%s�� �ֻ��� ��ȣ�� %d �Դϴ�.\n", player2, dice_number);

	if (roll_player1 > roll_player2)
	{
		printf("%s�� �¸��Դϴ�.\n", player1);
		}

	if (roll_player2 > roll_player1)
	{
		printf("%s�� �¸��Դϴ�.\n", player2);
		}

	if (roll_player2 == roll_player1)
	{
		printf("���º��Դϴ�.\n");
	} 

}