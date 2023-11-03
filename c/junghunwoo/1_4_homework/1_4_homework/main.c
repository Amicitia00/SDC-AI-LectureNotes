#include <stdio.h>

/* ����� 2���� ���� �� ����ڵ��� �̸��� �����ϵ��� �����մϴ�.
*  ������ ����� 2���� �ֻ����� �����ϴ�.
*  �ֻ����� ������ ���ڰ� ū ����� �̰�ٰ� ����ϵ��� �����ô�!
*/

// Domain (����) �и��ϱ�
// �ϴ� ���� ��Ȳ���� �ʿ��ϴ� �����Ǵ� �͵��� ������
// �����ϸ鼭 �̷� �͵��� �� �ʿ��� �� ������? �ϸ� �߰���
// �� ������ ����(Waterfall)�� ���� �̸� �Ͳ� �� �������� �ϴµ� ����
// ������(Agile ����� ����ϸ� ���� ���� ���� �ʿ� ���Ե�
// [ �� XP => eXtreme Programming ����� �ʿ��� => �Լ� �������� ]
// 
// �����
// �ֻ���

#include "dice_game.h"
#include "random_generator.h"
#include "win.h"
#include "player.h"
#include "malloc_test.h"


#define FOR_TEST_DYNAMIC_ARRAY_COUNT		5


int main(void) {
	int loop_count = 0;
	//Agile ����� ���� �� ���� �߿��� ��
	// ���� ������ ���� ������� �ϸ� ���մϴ�.
	// �ֻ��� �����ٸ� ���� ������ �մϴ�.

		//���� �������� �ֻ��� �����ٴ� �Ʒ��� �����ϴ�.
		// ��������� �Ҽ��� ���� �˴ϴ�.
		// ���� �� ���� => �̰��� ��� ���� �������� ���ϴ� ������ ���� (�� ����)
		// �׷��� ���� x^2�� ���� ���� �� 1/3 x^3 �� ���;� �Ѵٶ�� ��Ȯ�� ���� ����
		// �׷��� ���α׷��ֿ��� ������ ���� (�Ҽ� ����� ����)
		// 
		// 1. �÷��̾� �̸��� �����մϴ�.
	int i;

	//���� �� �� test_array�� �ᱹ
	//malloc()�� ���� �Ҵ� ���� �޸� �����̶�� ���� ����ϼ���.
	int test_array[3] = { 1, 2, 3 };
	int* test_pointer = test_array;

	char person_name[32] = "�ȳ��ϼ���";

	for (i = 0; i < 3; i++)
	{
		printf("�����͸� �迭ó�� ��� �� �� ����: %d\n", test_pointer[i]);
	}

	set_player_info("first_player");
	set_player_info("second_player");

	print_player_info(0);
	print_player_info(1);

	//2. �� �÷��̾���� �ֻ����� �����ϴ�
	// random_config()�� ���� ������ �������� ���� �ʰ� �� �� ���� ���� �����Եȴ�.
	random_config();
	roll_dice(0);
	roll_dice(1);

	print_dice_number(0);
	print_dice_number(1);

	// 3. ���� �ֻ����� ������ ���� ���ڸ� �����մϴ�.
	check_winner(0, 1);

	// malloc test
	// =>������ ���� ��(���)�� ���� ���� �ִ� ����
	//		���� ���� �ʽ��ϴ�.(������ �׳� ���)

	create_int_dynamic_array(FOR_TEST_DYNAMIC_ARRAY_COUNT);

	while (loop_count++ < FOR_TEST_DYNAMIC_ARRAY_COUNT)
	{
		put_one_integer_data(loop_count * 2);
	}

	print_integer_dynamic_array();
	/* ���������� Ư�� ���� '{' ���� �����ؼ� '}'���� ������ ���� ���ο����� ����� �� �ֱ� ������
	*  �ٸ��� ǥ�����ڸ�
	test_local_variable();
	printf("test_variable = %d\n", test_variable);
	*/

	create_char_dynamic_array(person_name);
	set_name_to_char_dynamic_array(person_name);
	print_char_dynamic_array();

	return 0;
}