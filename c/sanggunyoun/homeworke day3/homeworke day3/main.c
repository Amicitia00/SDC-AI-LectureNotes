#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "dice_game.h"
#include "player.h"
#include "print_random.h"
#include "random_generator.h"

#define LOOP_MAX 1

int main(void)
{
	srand(time(NULL));

	int loop_count = 0;


	char player1[32] = "�ȳ�";
	char player2[32] = "�ϼ�";

	int player1dice = player1;
	int player2dice = player2;
	
	player1dice = roll_dice();
	printf("�ȳ��� �ֻ����� %d\n", player1dice);

	player2dice = roll_dice();
	printf("�ϼ��� �ֻ����� %d\n", player2dice);

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


	// if������ �ȳ�, �ϼ� �ֻ���������( == , >, <)
	// �º� �޽��� ��� {printf("�¸�")},{printf("�й�")},printf{("���º�")}

	return 0;
}
