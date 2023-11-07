#include <stdio.h>
#include "print_even.h"
#include "print_even_advanced.h"
#include "print_random.h"
#include "dice_game.h"
#include "random_dice.h"
#include "player.h"

#define LOOP_MAX  5

int main(void)
{	
	const int random_number_count = 10;
	const int start = 3;
	const int end = 13; 
	const int dice_roll = 5;

	int loop_count = 0;
	// ���� ~ �� ������ ���ڿ��� ¦���� ��� 
	print_even_number_from_start_to_end(start,end);
	printf("\n");
	
	printf("���� �� ������ �ڵ�!\n");
	print_even_number_from_start_to_end_advanced(start, end);
	printf("\n");

	//random ���� 10�� ����ϱ� 
	print_random_number(random_number_count);
	printf("\n");

	//�ֻ��� ������ 
	print_random_dice(dice_roll);
	printf("\n");

	printf("���� �� ������ �ֻ��� �ڵ�!\n");
	// while ���� for ���� ���������� �ݺ��� �� �ϳ��Դϴ�. 
	// ���������� for�� �ణ ������ �������� ���� ����ϴ� ���̰� while�� �ܼ��� ���R�� �������� �ϸ� ����ϴ� ���̴�.
	// ���� �������� �κ��̱� ������ �� ������ �� �ʿ�� ����. 

	// - while�� ���� ���� 
	//	���� �񱳴� if�� �����ϴ� 
	//	�Ұ�ȣ ���� ������ �����ϸ� �ݺ��� �ȴ�. 
	//	�Ұ�ȣ ���� ������ �������� ���ϸ� �ݺ��� �ߴܵ�. 
	 
	// loop_count�� LOOP_MAX(5) ���� �۴ٸ� �ݺ� 
	// �ٵ� '++'�� �پ� �ֱ� ������ loop_count�� �ݺ����� ���ڰ� 1�� �����ϰ� �ȴ�.  
	while (loop_count++ < LOOP_MAX)
	{
		printf("loop_count = %d\n", loop_count);
		roll_dice();
		print_dice_number();
	}
	
	printf("\n");

	set_player_name("�ڼ�ȯ");
	print_player_name();
	return 0;
}

// '++',  '--'���� ���� �����ڿ� ���� ������ ������ ������ 
// ���� �������� ��� '++ loop_count'���°� �ȴ�. 
// �� ��쿡�� �Ʒ� ������ �� �Ǳ� ������ ���� ������ ����. 
// ���� �������� ��� 'loop_count++ '���°� �ȴ�. 
// �� ��쿡�� ������ ���� �񱳵ǰ� ���Ŀ� ���� ������ ����. 