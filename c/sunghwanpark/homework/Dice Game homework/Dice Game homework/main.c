#include <stdio.h>
#include "player.h"
#include "dice.h"
#include "random.h"

#define MAX 6
#define MIN 1


int main(void)
{
	int rolling = 1;
	int dice1;
	int dice2;
	

	set_player_name("¯��");
	print_player_name();
	
	dice1 = set_dice_number(rolling);
	printf("�ֻ��� ��: %2d\n", dice1);
	
	set_player_name("�ͱ�");
	print_player_name();
	
	dice2 = set_dice_number(rolling);
	printf("�ֻ��� ��: %2d\n", dice2);

	if (dice1 > dice2)
	{
		printf("¯�� ��");
	}
	else if (dice1 < dice2) {
		printf("�ͱ� ��");
	}
	else {
		printf(" ���º� ");
	}
	
	

	return 0;
}