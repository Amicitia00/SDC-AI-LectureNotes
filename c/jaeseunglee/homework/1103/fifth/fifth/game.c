#include <stdio.h>

#include "game.h"
#include "player.h"
#include "dice.h"
#include "random.h"
#include "common.h"

void playe_game()
{
	int loop;
	char* nickname[MAX_PLAYER_NUMBER] = {
		"��Ŀ",
		"����"
	};

	printf("���� Ǯ��\n");

	for (loop = 0; loop < MAX_PLAYER_NUMBER; loop++)
	{
		init_player_nickname(nickname[loop]);
	}

	print_player_list();

	random_seed_config();

	for (loop = 0; loop < MAX_PLAYER_NUMBER; loop++)
	{
		int firse_dice_number = roll_dice();
		printf("ù ��° �ֻ��� ����: %d\n", firse_dice_number);

		if (check_even(firse_dice_number))
		{
			int second_dice_number = roll_dice();
			printf("��ų�� �ߵ��մϴ�!\n");

			//apply_dice_skill();
		}
	}
}