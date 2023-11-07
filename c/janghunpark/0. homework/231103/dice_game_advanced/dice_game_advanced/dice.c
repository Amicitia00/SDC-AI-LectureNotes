#include <stdio.h>
#include "player.h"
#include "dice.h"
#include "random_generator.h"

#define FIRST_ROLL			0
#define SECOND_ROLL			1

const int min = 1;
const int max = 6;

int player_each_dice_number[MAX_PLAYER_NUMBER][MAX_ROLL_NUMBER];
int final_dice_number[MAX_PLAYER_NUMBER];
int current_player_index;

void roll_dice(void)
{
	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		player_each_dice_number[current_player_index][FIRST_ROLL] = generate_random(min, max);
		print_first_dice_number();
		check_even_dice_number();
	}
}

void print_first_dice_number(void)
{
	printf("%d �� �÷��̾��� ù ��° �ֻ��� ������ %d\n", current_player_index, player_each_dice_number[current_player_index][FIRST_ROLL]);
}

void check_even_dice_number(void)
{
	if (player_each_dice_number[current_player_index][FIRST_ROLL] % 2 == 0)
	{
		printf("%d�� �÷��̾�� ¦���� �����̱���! �� �� �� ���� ��ȸ�� �帳�ϴ�.\n", current_player_index);
		second_roll_dice();
	}
	else
	{
		printf("Ȧ������! �ƽ����� %d�� �÷��̾���� ���⼭ ���Դϴ�.\n", current_player_index);
	}
}

void second_roll_dice(void)
{
	player_each_dice_number[current_player_index][SECOND_ROLL] = generate_random(min, max);
	printf("%d �� �÷��̾��� �� ��° �ֻ��� ������ %d\n", current_player_index, player_each_dice_number[current_player_index][SECOND_ROLL]);
	apply_skill();
}

void apply_skill(void)
{
	int target_player_index;
	
	if (player_each_dice_number[current_player_index][SECOND_ROLL] == 2)
	{
		player_each_dice_number[current_player_index][SECOND_ROLL] += 5;
		printf("�߰��� 3�� ���մϴ�!\n");
	}
	else if (player_each_dice_number[current_player_index][SECOND_ROLL] == 4)
	{
		player_each_dice_number[current_player_index][SECOND_ROLL] -= 1000;
		printf("BAAAM! �����̽��ϴ�!\n");
	}
	else if (player_each_dice_number[current_player_index][SECOND_ROLL] == 3)
	{
		target_player_index = find_target_player(current_player_index);
		player_each_dice_number[target_player_index][SECOND_ROLL] -= 4;
		printf("���濡�� -4 ������ �մϴ�!\n");
	}
	else
	{
		printf("��ų�� ���� �����ϴ�!\n");
	}
}

int find_target_player(int current_player_index)
{
	return current_player_index ? 0 : 1;
}

void check_winner(void)
{
	int index;
	for (index = 0; index < MAX_PLAYER_NUMBER; index++)
	{
		final_dice_number[index] = player_each_dice_number[index][FIRST_ROLL] + player_each_dice_number[index][SECOND_ROLL];
	}
	
	if (final_dice_number[0] > final_dice_number[1])
	{
		printf("%d�� �÷��̾ �¸��ϼ̽��ϴ�!\n", 0);
	}
	else if (final_dice_number[0] < final_dice_number[1])
	{
		printf("%d�� �÷��̾ �¸��ϼ̽��ϴ�!\n", 1);
	}
	else
	{
		printf("���º��Դϴ�!");
	}
	
}