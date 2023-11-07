#include "dice_game.h"
#include "second_dice.h"
#include "random_generator.h"

int player_each_dice_number[MAX_PLAYER_NUMBER];
int player_each_dice_number2[MAX_PLAYER_NUMBER];

int player_each_dice_score1 = 0;
int player_each_dice_score2 = 0;


const int min = 1;
const int max = 6;



void roll_dice(const int index)
{
	player_each_dice_number[index] = generate_random(min, max);
	printf("ù ��° �÷��̾� �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number[index]);

	if (player_each_dice_number[index] % 2 == 0)
	{
		player_each_dice_score1 = player_each_dice_score1 + player_each_dice_number[index];
		second_dice_player1(index);
	}
	else
	{
		player_each_dice_score1 = player_each_dice_score1 + player_each_dice_number[index];
	}
}

void roll_dice2(const int index)
{
	player_each_dice_number[index] = generate_random(min, max);
	printf("�� ��° �÷��̾� �ֻ��� ������ %d�Դϴ�.\n", player_each_dice_number[index]);

	if (player_each_dice_number[index] % 2 == 0)
	{
		player_each_dice_score2 = player_each_dice_score2 + player_each_dice_number[index];
		second_dice_player2(index);
	}
	else
	{
		player_each_dice_score2 = player_each_dice_score2 + player_each_dice_number[index];
	}

}


void print_dice_number(const int index)
{
	printf("%d�� �÷��̾��� �ֻ��� ������ %d\n", index, player_each_dice_number[index]);
}