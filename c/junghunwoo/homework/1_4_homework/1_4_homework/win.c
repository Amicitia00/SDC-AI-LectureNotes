#include "win.h"
#include "player.h"
#include"dice_game.h"

void check_winner(const int index)
{
	if (player_each_dice_score1 > player_each_dice_score2)
	{
		printf("%d �� %d ���� player ��ȣ %d = %s ���� �¸��ϼ̽��ϴ�!\n", player_each_dice_score1, player_each_dice_score2, index, player[index]);
	}
	else if (player_each_dice_score1 < player_each_dice_score2)
	{
		printf("%d �� %d ���� player ��ȣ %d = %s ���� �¸��ϼ̽��ϴ�!\n", player_each_dice_score1, player_each_dice_score2, 1, player[1]);
	}
	else
	{
		printf("���º��Դϴ�!");
	}
}