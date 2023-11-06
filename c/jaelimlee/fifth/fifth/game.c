#include "game.h"
#include "player.h"
#include "dice.h"
#include "random.h"
#include "common.h"

#include <stdio.h>
#define SECOND_DICE_INDEX		1
#define BUFF_NUMBER			3
#define DBUFF_NUMBER		4

int player_each_dice_number[MAX_PLAYER_NUMBER][MAX_ROLL_NUMBER];

void play_game(void)
{
	int loop;
	int current_player_index;

	char* nickname[MAX_PLAYER_NUMBER] = {
		"�Թ��� �� ����",
		"�ִ� ������"
	};

	printf("����� �г��� ����\n");
	// �Ʒ� ������ �־ ��� ������ �켱�� ������ �и�
	for (loop = 0; loop < MAX_PLAYER_NUMBER; loop++)
	{
		init_player_nickname(nickname[loop]);

	}
	print_player_list();
	
	random_seed_config();
	for (current_player_index = 0; current_player_index < MAX_PLAYER_NUMBER; current_player_index++)
	{
		int try_count = 0;
		int first_dice_number;

		first_dice_number = player_each_dice_number[current_player_index][try_count] = roll_dice();
		printf("�ֻ��� ����: %d\n", first_dice_number);

		if (check_even(first_dice_number))
		{
			printf("�ֻ��� ��ų�� �ߵ��մϴ�!\n");
			apply_dice_skill(current_player_index);
		}
	}
	
}

void apply_dice_skill(int current_player_index)
{
	int second_dice_number = 
		player_each_dice_number[current_player_index][SECOND_DICE_INDEX] = roll_dice();

	printf("���� �� ��° ������ ���� = %d\n", second_dice_number);
	
	int target_player_index;

	switch (second_dice_number)
	{
	case 2:
		buff_to_current_player(current_player_index);
		printf("�� ���� �ֻ��� ������ %d\n", 
			player_each_dice_number[current_player_index][SECOND_DICE_INDEX]);
		break;

	case 3:
		target_player_index = find_target_player(current_player_index);
		printf("��ų ���� �� ���� %d", player_each_dice_number[target_player_index][SECOND_DICE_INDEX]);
		dbuff_to_target_player(target_player_index);
		printf("��ų ���� dlgn ���� %d", player_each_dice_number[target_player_index][SECOND_DICE_INDEX]);
		break;

	case 4:
		break;

	default:
		printf("��ų ����� �Ұ��մϴ�!\n");
		break;
	}
}

void buff_to_current_player(current_player_index)
{
	player_each_dice_number[current_player_index][SECOND_DICE_INDEX] += BUFF_NUMBER;
}

int find_target_player(int current_player_index)
{
	// ���� ? ���� ���: ������ ���
	// ���� ���·� �ۼ�
	return current_player_index ? 0 : 1;
}

void dbuff_to_target_player(int target_player_index)
{
	player_each_dice_number[target_player_index][SECOND_DICE_INDEX] += DBUFF_NUMBER;
}