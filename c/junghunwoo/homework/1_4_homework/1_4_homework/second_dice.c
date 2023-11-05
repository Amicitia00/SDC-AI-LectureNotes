#include <stdio.h>
#include "second_dice.h"
#include "dice_game.h"
#include "random_generator.h"

const int min2 = 1;
const int max2 = 6;

void second_dice_player1(index)
{
	player_each_dice_number2[index] = generate_random(min2, max2);
	if (player_each_dice_number2[index] == 2)
	{
		printf("ù ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		player_each_dice_score1 = player_each_dice_score1 + player_each_dice_number2[index] + 3;
	}
	else if (player_each_dice_number2[index] == 3)
	{
		printf("ù ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		player_each_dice_score1 = player_each_dice_score1 + player_each_dice_number2[index];
		player_each_dice_score2 = player_each_dice_score2 - 4;
	}
	else if (player_each_dice_number2[index] == 4)
	{
		printf("ù ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		printf("�÷��̾� %s�� ������ ������ 0�� �˴ϴ�.\n", player[index]);
		player_each_dice_score1 = 0;
	}
	else
	{
		printf("ù ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		player_each_dice_score1 = player_each_dice_score1 + player_each_dice_number2[index];
	}
}

void second_dice_player2(index)
{
	player_each_dice_number2[index] = generate_random(min2, max2);
	if (player_each_dice_number2[index] == 2)
	{
		printf("�� ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		player_each_dice_score2 = player_each_dice_score2 + player_each_dice_number2[index] + 3;
	}
	else if (player_each_dice_number2[index] == 3)
	{
		printf("�� ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		player_each_dice_score2 = player_each_dice_score2 + player_each_dice_number2[index];
		player_each_dice_score1 = player_each_dice_score1 - 4;
	}
	else if (player_each_dice_number2[index] == 4)
	{
		printf("�� ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		printf("�÷��̾� %s�� ������ ������ 0�� �˴ϴ�.\n", player[1]);
		player_each_dice_score2 = 0;
	}
	else
	{
		printf("�� ��° �÷��̾� �� ��° �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number2[index]);
		player_each_dice_score2 = player_each_dice_score2 + player_each_dice_number2[index];
	}
}
