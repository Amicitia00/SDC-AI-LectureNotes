#include <stdio.h>

#include "player.h"
#include "dice_game.h"
#include "random_generator.h"


#include "random_generator.h"


#define PLAYER_COUNT		2

int main(void)
{
	int index;

	// �÷��̾� ����
	set_player_info("first_player");
	set_player_info("second_player");

	for (index = 0; index < PLAYER_COUNT; index++)
	{
		print_player_info(index);
	}

	create_player_score_array(PLAYER_COUNT);

	// ù��° �ֻ���
	random_config();
	for (index = 0; index < PLAYER_COUNT; index++)
	{
		roll_dice(index);
		print_dice_number(index);
	}

	// �ι�° �ֻ���
	for (index = 0; index < PLAYER_COUNT; index++) 
	{
		roll_dice_second(index);
		print_dice_number(index);
	}
	// ���

	//check_winner();


}