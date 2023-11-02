#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "dice_game.h"

#define LOOP_MAX		3

int	main(void)
{
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13;

	int loop_count = 0;

	printf("The Original Version\n");
	print_even_number_from_start_to_end(start, end);
	printf("The Upgraded Version\n");
	print_even_number_from_start_to_end_advanced(start, end);

	// random number 10�� ���
	print_random_number(random_number_count);
	printf("\n");

	/*
	while ���� for ���� ���������� �ݺ��� �� �ϳ�
	���������� for �� �ణ ������ �������� ���� ���
	while �� �ܼ��� ������ �������� ���
	�������� �κ��̶� �� �׷��� �� �ʿ�� ����

	while�� ���� ����
	1. ���� �񱳴� if�� ����
	2. �Ұ�ȣ ���� ������ �����ϸ� �ݺ�
	3. �Ұ�ȣ ���� ������ ���� �� �ϸ� �ݺ� �ߴ�

	loop_count�� LOOP_MAX(3) ���� �۴ٸ� �ݺ�
	�ٵ� '++'�� �پ� �����Ƿ� loop_count�� �ݺ����� ���ڰ� 1�� ����

	'++', '--' ���� ���� ������ vs ���� ������ ���� ����
	���� �������� ��� '++loop_count' ����
	�� ��쿣 �Ʒ� ������ �� �Ǳ� ���� ������ ���� ���
	���� �������� ��� 'loop_count++' ����
	�� ��쿣 ������ ���� �񱳵ǰ� ���� ����
	*/
	while (loop_count++ < LOOP_MAX)
	{
		printf("loop_count = %d\n", loop_count);
		roll_dice();
		print_dice_number();
		printf("extern�� ��·�ٰ�? = %d\n", dice_number);
	}

	return 0;
}