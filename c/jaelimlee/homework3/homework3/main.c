#include <stdio.h>
#include "dice_game.h"
#include "player.h"
#include <stdlib.h>
#include <time.h>


int main(void)
{
	
	char player1[PLAYER_NAME_MAX]; // �����1 
	char player2[PLAYER_NAME_MAX]; // �����2

	int dice1; // ����� 1�� �ֻ���
	int dice2; // ����� 2�� �ֻ���


	// �����1 ����
	set_player_name("�迵��");
	strcpy(player1, player_name);
	print_player_name();

	// �����1�� �ֻ���
	srand(time(NULL));
	roll_dice();
	dice1 = dice_number;
	print_dice_number();
	
	// �����2 ����
	set_player_name("��ö��");
	strcpy(player2, player_name);
	print_player_name();

	// �����2 �ֻ���
	roll_dice();
	dice2 = dice_number;
	print_dice_number();


	if (dice1 > dice2)
	{
		printf("�̱� �����:%s", player1);
	} 
	
	else if (dice2 > dice1)
	{
		printf("�̱� �����:%s", player2);
	}
	else
	{
		printf("���º��Դϴ�.");
	}
	

	return 0;
}