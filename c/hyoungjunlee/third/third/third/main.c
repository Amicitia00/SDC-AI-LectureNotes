#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "random_generator.h"
#include "dice_game.h"
#define LOOP_MAX		5
int main(void)
{
	const int random_number_count = 10;
	int loop_count = 0;
	
	const int start = 3;
	const int end = 13;
	// ���� -�� ������ ���ڿ��� ¦���� ��� ���� �Լ��� ����
	print_even_number_from_start_to_end(start, end);

	printf("���ݴ� ������ �ڵ�\n");
	print_even_number_from_start_to_end_advanced(start, end);

	//random ���� 10�� ����ϱ�
	print_random_number(random_number_count);

	//random_dice(random_number_count);
	
	//while���� for���� ���������� �ݺ��� �� �ϳ� �Դϴ�
	//���������� for�� �ణ ������ �������� ���� ����ϴ� ���̰�
	// while�� �ܼ��� �R���� �������� �ϸ� ����ϴ� ���Դϴ�

	// -while�� ���۰���
	//  ���� �񱳴� if�� �����մϴ�
	//  �Ұ�ȣ ���� ������ �����ϸ� �ݺ��� �˴ϴ�
	//  �Ұ�ȣ ���� ������ �����������ϸ�� �ݺ��� �ߴܵ˴ϴ�

    //loop_count�� LOOP_MAX(5) ���� �۴ٸ� �ݺ�
	// �ٵ� '++'�� �پ��ֱ� ������
	//loop_count�� �ݺ����� ���ڰ� 1�� �����ϰ� �˴ϴ�
	// 
	// '++','--'���� ���� �����ڿ� ���� ������ ������ ������
	// ���� �������� ��� '++loop count' �����Դϴ�
	// �� ��쿣 �Ʒ� ������ �� �Ǳ� ������ ���� ������ ���˴ϴ�
	// ���� �������� ��� 'loop count++' �����Դϴ�
	// �̰�쿣 ������ ���� �񱳵ǰ� ���Ŀ� ������ ���˴ϴ�
	while (loop_count++ < LOOP_MAX)
	{
		roll_dice();
		print_dice_number();
	}
	

	return 0;

}