#include <stdio.h>
#include "fight.h"
#include "dice.h"
#include "player.h"

void fight(int index_player1, int index_player2)
{
	if (player_each_dice_number[index_player1] > player_each_dice_number[index_player2])
	{
		printf("player ��ȣ %d = %s ���� �¸��ϼ̽��ϴ�!", index_player1, player[index_player1]);
	}
	else if (player_each_dice_number[index_player1] < player_each_dice_number[index_player2])
	{
		printf("player ��ȣ %d = %s ���� �¸��ϼ̽��ϴ�!", index_player2, player[index_player2]);

	}
	else
	{
		printf("���º��Դϴ�!");
	}
}