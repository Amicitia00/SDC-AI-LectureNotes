#include "game.h"
#include "player.h"
#include "dice.h"
#include "random.h"
#include "common.h"

#include <stdio.h>

int player_each_dice_number[MAX_PLAYER_NUMBER][MAX_ROLL_NUMBER];

void play_game(void)
{
	int loop;
	int current_player_index;
	char* nickname[MAX_PLAYER_NUMBER] = {
		"�Թ���������",
		"�ִ԰�����"
	};

	printf("����� �г��� ����\n");
	// �Ʒ� ������ �־ ��������� �켱�� ������ �и��ϰڽ��ϴ�
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

		first_dice_number = 
			player_each_dice_number[current_player_index][try_count] = roll_dice();

		printf("�ֻ��� ����: %d\n", first_dice_number);

		if (check_even(first_dice_number))
		{
			printf("�ֻ��� ��ų�� �ߵ��մϴ�!\n");
			//apply_dice_skill();
		}
	}
}