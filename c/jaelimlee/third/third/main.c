#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "random_generator.h"
#include "dice_game.h"
#include "player.h"

# define LOOP_MAX  5

int main(void)
{
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13;
	
	int loop_count = 0;

	// ����~�� ������ ���ڿ��� ¦���� ���
	print_even_number_from_start_to_end(start, end);

	printf("���� �� ������ �ڵ�!\n");
	print_even_number_from_start_to_end_advanced(start, end);

	// random ���� 10�� ����ϱ�
	print_random_number(random_number_count);

	//while ���� for���� ���������� �ݺ��� �� �ϳ�
	// ���������� for�� ���ǰ� �ణ ������ �������� ���� ���
	// while �� �ܼ��� ������ �������� �ϸ� ����ϴ� ��
	// �������� �κ��̱⿡ �� ������ �� �ʿ�X
	

	// -while�� ���� ����
	//  ���� �񱳴� if�� ����
	//  �Ұ�ȣ ���� ������ �����ϸ� �ݺ���
	//  �Ұ�ȣ ���� ������ �������� ���ϸ� �ݺ��� �ߴ�

	// loop_count�� LOOP_MAX(5)���� �۴ٸ� �ݺ�
	// ++�� �پ��ֱ� ������ loop_count�� �ݺ����� ���ڰ� 1�� �����ϰ� ��.

	// ++, --���� ���� �����ڿ� ���� ������ ������ ������
	// ���� �������� ��� '++loop_count' ���°� ��
	// �� ��쿡�� �Ʒ� ������ �� �Ǳ� ������ ���� ������ ����
	// ���� �������� ��� 'loop_count++' ����
	// �� ��쿣 ������ ���� �񱳵ǰ� ���� ������ ����.

	// �ֻ��� ������
	while (loop_count++ < LOOP_MAX)
	{
		roll_dice();
		print_dice_number();
	}
	
	set_player_name("�ȳ�");
	print_player_name();
	
	return 0;
}