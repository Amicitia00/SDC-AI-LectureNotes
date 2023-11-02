#include <stdio.h>
#include "dice_game.h"
#include "player.h"
#include "print_random.h"

#define LOOP_MAX 1

int main(void)
{
	
	int loop_count = 0;


	

	
	while (loop_count++ < LOOP_MAX)
	{
		printf("loop_count = %d\n", loop_count);
		roll_dice();
		print_dice_number();
	}

	set_player_name("�ȳ�");
	print_player_name();

	while (loop_count++ < LOOP_MAX)
	{
		printf("loop_count = %d\n", loop_count);
		roll_dice();
		print_dice_number();
	}

	set_player_name("�ϼ�");
	print_player_name();

	return 0;
}
