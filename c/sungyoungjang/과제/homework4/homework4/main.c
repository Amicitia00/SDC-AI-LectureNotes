#include <stdio.h>
#include <stdlib.h>
#include "skill.h"


int main(void) 
{
	set_player_info("����");
	set_player_info("����");

	print_player_info(0);
	print_player_info(1);

	random_config();
	roll_dice(0);
	roll_dice(1);

	int player1 = print_dice_number(0);
	int player2 = print_dice_number(1);

	int* player_scores[] = {2};

	skill(0, player1, player_scores);
	skill(1, player2, player_scores);

	printf("�÷��̾� 1�� ���� ����: %d\n", player_scores[0]);
	printf("�÷��̾� 2�� ���� ����: %d\n", player_scores[1]);

	

	if (player_scores[0] > player_scores[1])
	{
		printf("�÷��̾� 1�� �¸��߽��ϴ�!\n");
	}
	else if (player_scores[0] < player_scores[1]) 
	{
		printf("�÷��̾� 2�� �¸��߽��ϴ�!\n");
	}
	else
	{
		printf("���º��Դϴ�!\n");
	}
	
	return 0;
}

