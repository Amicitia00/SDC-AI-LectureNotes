#include <stdio.h>
#include "player.h"
#include "dice.h"
#include "fight.h"
#include "random_generator.h"

#define PLAYER_NUMBER 2

int main()
{

	set_player_info("�ȳ��ϼ���", player1);
	set_player_info("�ݰ����ϴ�", player2);

	random_config();

	roll_dice(0);
	roll_dice(1);

	fight(0,1);
	
	return 0;
}