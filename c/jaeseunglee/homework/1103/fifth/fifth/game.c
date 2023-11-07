#include <stdio.h>
#include <stdbool.h>

#include "game.h"
#include "player.h"
#include "dice.h"
#include "random.h"
#include "common.h"

int player_each_dice_number[MAX_PLAYER_NUMBER][MAX_ROLL_NUMBER];

#define FIRST_DICE_INDEX		0
#define SECOND_DICE_INDEX		1
#define BUFF_NUMBER				3
#define DEBUFF_NUMBER			4
#define PLAYER_DEATH			-4444

void play_game()
{
	int current_player_index;


	char* nickname[MAX_PLAYER_NUMBER] = {
		"��Ŀ",
		"����"
	};

	printf("���� Ǯ��\n");

	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		init_player_nickname(nickname[current_player_index]);
	}

	print_player_list();

	random_seed_config();

	

	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		int try_count = 0;
		int firse_dice_number = 
			player_each_dice_number[current_player_index][try_count] = roll_dice();
		printf("ù ��° �ֻ��� ����: %d\n", firse_dice_number);

		if (check_even(firse_dice_number))
		{
			
			printf("��ų�� �ߵ��մϴ�!\n");

			apply_dice_skill(current_player_index);
		}
	}

	check_winner();
}


void apply_dice_skill(const int current_player_index)
{

	// ���������� �ʱⰪ�� 0�̱⿡ �ʱ�ȭ �� �ʿ�� ����
	// ������ �ʿ��ϰų�, ���������� ��� �ʱ�ȭ �۾��� ���� �ʿ䰡 ����
	int second_dice_number = roll_dice();

	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] += second_dice_number;
	printf("�� ��° �ֻ����� %d\n", second_dice_number);

	int target_player_index;

	switch (second_dice_number)
	{
	case 2:
		buff_to_current_player(current_player_index);
		printf("���� �ߵ�!\n");
		printf("�� ��° �ֻ��� ������ %d\n", player_each_dice_number[current_player_index][SECOND_DICE_INDEX]);
		break;

	case 3:
		target_player_index = find_target_player(current_player_index);

		printf("����� �ߵ�!");
		debuff_to_target_player(target_player_index);
		printf("��� �ֻ��� ���� ����: %d -> %d \n", player_each_dice_number[target_player_index][SECOND_DICE_INDEX]+DEBUFF_NUMBER, player_each_dice_number[target_player_index][SECOND_DICE_INDEX]);
		break;

	case 4:
		player_death(current_player_index);
		printf("�׾���: %d\n",
			player_each_dice_number[current_player_index][SECOND_DICE_INDEX]);
		break;

	default:
		printf("��ų ����� �Ұ����մϴ�!\n");
		break;
	}
}

void buff_to_current_player(int current_player_index)
{
	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] += BUFF_NUMBER;
}

int find_target_player(int current_player_index)
{
	// ���� ? ���ΰ�� : �����ΰ��
	// ���� ���·� �ۼ��մϴ�.
	return current_player_index ? 0 : 1;
}

void debuff_to_target_player(int target_player_index)
{
	player_each_dice_number[target_player_index][SECOND_DICE_INDEX] -= DEBUFF_NUMBER;
}

void player_death(int current_player_index)
{
	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] = PLAYER_DEATH;
}

void check_winner()
{
	int each_player_dice_sum[MAX_PLAYER_NUMBER];
	int current_player_index;

	int death_count = 0;

	bool does_everyone_lose = false;

	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		each_player_dice_sum[current_player_index]
			= player_each_dice_number[current_player_index][FIRST_DICE_INDEX] +
			player_each_dice_number[current_player_index][SECOND_DICE_INDEX];
	}

	// 4�� ���� ���� ó��
	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		if (player_each_dice_number[current_player_index][SECOND_DICE_INDEX] == PLAYER_DEATH)
		{
			printf("�÷��̾�%d ���� �й��ϼ̽��ϴ�.\n", current_player_index);
			death_count++;
		}
	}

	if (death_count == 2) { does_everyone_lose = true; }

	if (does_everyone_lose) { return; }

	if (each_player_dice_sum[0] > each_player_dice_sum[1])
	{
		printf("0�� �÷��̾� �¸�!");
	}
	else if (each_player_dice_sum[0] < each_player_dice_sum[1])
	{
		printf("1�� �÷��̾� �¸�!");
	}
	else
	{
		printf("���º�");
	}
}