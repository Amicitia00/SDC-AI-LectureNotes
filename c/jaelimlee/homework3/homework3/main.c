#include <stdio.h>
#include "dice_game.h"
#include "player.h"
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int dice1; 
	int dice2;

	char player1;
	char player2;

	int dice1; // ����� 1�� �ֻ���
	int dice2; // ����� 2�� �ֻ���


	// �����1 ����
	set_player_name("����");
	strcpy(player1, player_name);
	print_player_name();

	// �����1�� �ֻ���
	srand(time(NULL));
	roll_dice();
	dice1 = dice_number;
	print_dice_number();
	

	// �����2 �ֻ���
	roll_dice();
	dice2 = dice_number;
	print_dice_number();


	if (dice1 > dice2)
	{
		printf("�̱� �����:%d", player1);
	} 
	
	else if (dice2 > dice1)
	{
		printf("�̱� ���:%s", player2);
	}
	else
	{
		printf("���º�");
	}


	return 0;
}