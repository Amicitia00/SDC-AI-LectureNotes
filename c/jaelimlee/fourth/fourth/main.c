#include <stdio.h>

/* ����� 2���� ����� �� ����� �̸� ����
   ������ ����� 2���� �ֻ����� ����
   �ֻ����� ������ ���ڰ� ū ����� �̰�ٰ� ����ϵ��� �����
*/

// Domain (����) �и��ϱ�
// �ϴ� ���� ��Ȳ���� �ʿ��ϴ� �����Ǵ� �͵��� ������
// �����ϸ鼭 �̷� �͵��� �� �ʿ��� �� ������? �ϸ� �߰�
// �� ������ ����(Waterfall)�� ���� �̸� �Ͳ� �� �������� �ϴµ� ����
// ������(Agile) ����� ����ϸ� ���� ���� �ʿ�X
// �� XP=> eXtreme Programming ����� �ʿ���-> �Լ� ��������

// �����
// �ֻ���

#include "player.h"
#include "dice_game.h"
#include "random_generator.h"
#include "win.h"
#include "malloc_test.h"

#define FOR_TEST_DYNAMIC_ARRAY_COUNT		8

int main(void)
{
	// * Agile ����� ���� �� ���� �߿��� ��
	//   ���� ������ ���� ������� �ϸ� ����
	//   �ֻ��� �����ٸ� ���� ������ ��

	// ���� �������� �ֻ��� �����ٴ� �Ʒ��� ����
	// ��������� �Ҽ��� ���� ��
	// ���� ����=> �̰��� ��� ���� �������� ���ϴ� ������ ����
	//				�׷��� ���� X^2�� �������� �� 1/3 x^3�� ���;� �Ѵٶ�� ��Ȯ�� ���� ����
	//				�׷��� ���α׷��ֿ��� ������ ����
	// 1. �÷��̾� �̸� ����
	int loop_count = 0;
	set_player_info("first_player");
	set_player_info("second_player");

	print_player_info(0);
	print_player_info(1);

	// 2. �� �÷��̾���� �ֻ����� ����
	//roll_dice(first_player)
	//roll_dice(second_player);
	random_config();
	roll_dice(0);
	roll_dice(1);

	print_dice_number(0);
	print_dice_number(1);

	// 3. ���� �ֻ����� ������ ���� ���ڸ� ����
	check_winner(0, 1);

	// malloc test
	// -> ������ ���� ��(���)�� ���� �ִ� ���� ���� ���� X
	create_int_dynamic_array(FOR_TEST_DYNAMIC_ARRAY_COUNT);

	while (loop_count++ < FOR_TEST_DYNAMIC_ARRAY_COUNT)
	{
		put_one_integer_data(loop_count * 2);
	}

	print_integer_dynamic_array();

	return 0;
}