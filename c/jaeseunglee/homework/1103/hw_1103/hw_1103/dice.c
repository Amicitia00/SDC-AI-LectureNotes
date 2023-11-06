#include "dice.h"

#include "random_generator.h"
#include <stdio.h>
#include "dice.h"

int player_each_dice_number[MAX_PLAYER_NUMBER];
int* player1_dice;
int* player2_dice;

const int min = 1;
const int max = 6;


void roll_dice(int index)
{

	player_each_dice_number[index] = generate_random(min, max);

	print_dice_number(index);
	check_even(player_each_dice_number[index], index);
}

void check_even(int number, int index)
{
	if (number % 2 == 0)
	{
		printf("¦���Դϴ�. �� �� �� �����ڽ��ϴ�.\n");
		roll_twice(index);
	}
	else
	{
		printf("Ȧ���Դϴ�.\n���� �����մϴ�.\n");
	}
}

void roll_twice(int index)
{
	printf("\n");
	int twice = generate_random(min, max);
	if (twice == 2)
	{
		printf("2! ���� �ֻ��� ������ 3��ŭ ���մϴ�!\n");
		defense(index);
	}
	else if (twice == 3)
	{
		printf("3! ��� �ֻ��� ������ 4��ŭ ���ϴ�!\n");
		attack(index);
	}
	else if (twice == 4)
	{
		printf("4! �ڻ��ϰ� ���ҽ��ϴ�\n");
		suicide(index);
	}
	else
	{
		printf("���Դϴ�\n");
	}

	printf("\n");
}

void attack(int index)
{
	if (index == 0)
	{
		player2_dice = player2_dice - 4;
	}
	else
	{
		player1_dice = player1_dice - 4;
	}
}

void defense(int index)
{
	player_each_dice_number[index] = player_each_dice_number[index] + 3;
}

void suicide(int index)
{
	player_each_dice_number[index] = 0;
}

void print_dice_number(int index)
{
	printf("%d �� �÷��̾��� �ֻ��� ������ %d\n", index, player_each_dice_number[index]);
}