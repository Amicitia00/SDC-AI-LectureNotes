#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "random_generator.h"
#include "dice_game.h"
#include "player.h"
#include "dice_fight.h"

#define LOOP_MAX		5

int main(void)
{
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13;

	int loop_count = 0;

	// start ~ end ������ ���ڿ��� ¦���� ���
	print_even_number_from_start_to_end(start, end);

	printf("���� �� ������ �ڵ�!\n");
	print_even_number_from_start_to_end_advanced(start, end);

	// random ���� 10�� ����ϱ�
	print_random_number(random_number_count);

	// while ���� for���� ���������� �ݺ����� �ϳ�
	// ���������� for�� �ణ ������ �������� ���� ����ϴ� ���̸�
	// while�� �ܼ��� ������ �������� �ϸ� ����ϴ� ��
	// �������� �κ��̱� ������ �� ! ���� �ʿ�� ����.

	// while�� ���� ����
	// - ���� �񱳴� if�� ������
	// - �Ұ�ȣ �� ������ �����ϸ� �ݺ�
	// - �Ұ�ȣ ���� ������ �������� ���ϸ� �ݺ� �ߴ�

	// loop_count�� LOOP_MAX(5) ���� �۴ٸ� �ݺ�
	// �ٵ� ++�� �پ� ������ loop_count�� �ݺ����� 1�� ����

	// '++', '--' ������ �����ڿ� ���� ������ ������ ����
	// ���� �������� ��� '++loop_count' ���°� ��
	// �� ��쿡�� �Ʒ� ������ �� �Ǳ� ������ ���� ������ ����
	// ���� �������� ��� 'loop_count++' ���°� ��
	// �� ��쿡�� ������ ���� �񱳵ǰ� ���� ����
	// ex) ++loop_count �� 4�� ����
	while (loop_count++ < LOOP_MAX)
	{
		printf("loop_count = %d\n", loop_count); //< ī��Ʈ �ñ��ϸ� ���
		roll_dice();
		print_dice_number();

		printf("�� �׳� ��۷�: %d\n", dice_number);
	}

	set_player_name("hello");
	print_player_name();

	set_player1("X");
	set_player2("Y");

	dice_fight(char player1[], char player2[])






		return 0;

}
