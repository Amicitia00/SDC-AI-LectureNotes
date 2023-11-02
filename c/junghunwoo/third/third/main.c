#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "random_dice.h"
#include "dice_game.h"
#include "player.h"

#define LOOP_MAX	5

int main(void)
{
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13;
	const int dice_count = 3;
	int loop_count = 0;

	char player1_name;
	char player2_name;
	int player1_score = 0;
	int player2_score = 0;

	//���۰� ���� ¦�� ���� ����ϴ� �Լ�
	print_even_number_from_start_to_end(start, end);

	printf("���� �� ������ �ڵ� \n");
	print_even_number_from_start_to_end_advanced(start, end);

	// random ���� 10�� ����ϱ�
	print_random_number(random_number_count);

	// �ֻ����� 3�� ������ ���� �� �� ����
	random_dice(dice_count);

	//while ���� for���� ���������� �ݺ����� �ϳ��Դϴ�.
	//���������� for�� �ణ ������ �������� ���� ����ϴ� ���̰�
	//while���� �ܼ��� �R�R�� �������� �ϸ� ����ϴ� ���Դϴ�.
	// ���� �������� �κ��̱� ������ �� ������ �� �ʿ䵵 �����ϴ�.
	
	// -while�� ���� ����
	// ���� �񱳴� if�� �����մϴ�
	// �Ұ�ȣ ���� ������ �����ϸ� �ݺ��� �˴ϴ�.
	// �Ұ�ȣ ���� ������ �������� ���ϸ� �ݺ��� �ߴܵ˴ϴ�.
	//
	// loop_count�� LOOP_MAX(5) ���� �۴ٸ� �ݺ�
	// �ٵ� '++'�� �پ� �ֱ� ������
	// loop_count�� �ݺ����� ���ڰ� 1�� �����ϰ� �˴ϴ�.

	//'++', '--'���� ���� �����ڿ� ���� ������ ������ ������
	// ������ �� ������ �ڿ� '++loop_count', loop_count++
	while (loop_count++ < LOOP_MAX)
	{
		roll_dice();
		print_dice_number();
	}

	set_player_name("Hello");
	print_player_name();

	set_player_name("alpha");
	player1_name = player_name;
	print_player_name();
	set_player_name("beta");
	player2_name = player_name;
	print_player_name();

	roll_dice();
	player1_score = dice_number;

	roll_dice();
	player2_score = dice_number;


	if (player1_score < player2_score)
	{
		printf("%d�� %d %d�� %d���� %d�� �̰���ϴ�.", player1_name, player1_score, player2_name, player2_score, player2_name);
	}
	else
	{
		printf("%s�� %d %s�� %d���� %s�� �̰���ϴ�.", player1_name, player1_score, player2_name, player2_score, player2_name);
	}


	return 0;
}