#include <stdio.h>
#include "player.h"

#define PLAYER_NUMBER 2

int main()
{

	set_player_info("�ȳ��ϼ���",player1);
	set_player_info("�ݰ����ϴ�", player2);

	print_player_info(0);
	print_player_info(1);

	
	return 0;
}