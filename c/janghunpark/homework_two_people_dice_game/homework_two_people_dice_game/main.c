#include <stdio.h>
#include "dice_game.h"
#include "player.h"

#define NUMBER_OF_PLAYER_MAX	2

int main(void)
{
	int number_of_player = 0;
	
	while (number_of_player++ < NUMBER_OF_PLAYER_MAX)
	{
		set_player_name("������");
		print_player_name();
		roll_dice();
		printf("%d�� �÷��̾�� ���� = %d\n", number_of_player, dice_number);
	}
}