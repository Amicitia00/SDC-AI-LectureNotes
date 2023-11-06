#include <stdio.h>
#include "player.h"
#include "dice_game.h"
#include "win.h"
#include "malloc.h"
 /*����� 2���� ���� �� ����ڵ��� �̸��� �����ϵ��� �����մϴ�.
 ������ ����� 2���� �ֻ����� �����ϴ�.
 �ֻ����� ������ ���ڰ� ū ����� �̰�ٰ� ����ϵ��� �����ô�.*/

// Domain(����) �и��ϱ�
// �ϴ� ���� ��Ȳ���� �ʿ��ϴ� �����Ǵ� �͵��� ����
// �����ϸ鼭 �̷� �͵��� �� �ʿ��ϴٸ� �߰�
// ��, ������ ����(Waterfall)�� ���� �̸� �� �������ϴµ� ����
// ������(Agile) ����� ����ϸ� �׶��׶� ���� �� ����
// [ �� XP => eXtreme Programming ����� �ʿ��� => �Լ� ��������]

#define FOR_TEST_MALLOC_INTEGER 5

int main(void)
{
	// ���� �� �� test_array�� �ᱹ 
	// malloc()�� ���� �Ҵ���� �޸� �������� ��� �� ��
	int test_array[3] = { 1,2,3 };
	int* test_pointer = test_array;

	char person_name[32] = "�ȳ��ϼ���";

	int i;
	for (i=0;i<3;i++)
	{
		printf("�����͸� �迭ó�� ��� �� �� ���� : %d\n", test_pointer[i]);
	}
	
	printf(return_string("123123123"));
	int loop_count=0;

	// Agile ����� ���� �� ���� �߿��� ��
	// ���� ������ ���� ������� �ϸ� X
	// �ֻ��� �����ٸ� ���� ��������

	// ���� �������� �ֻ��� �����ٴ� �Ʒ��� ����
	// ��������� �Ҽ��� ���� ��
	// ���ǻ��� : �̰��� ��� ���� �������� ���ϴ� ������ ����
	//			  �׷��ٺ��� x^2�� ���� ���� �� 1/3 x^3�� ���;��Ѵٴ� ���� ����
	//			  �׷��� ���α׷��ֿ��� ������ ����
	// 
	// 1. �÷��̾� �̸��� �����մϴ�.
	set_player_info("first_player");
	set_player_info("second_player");

	print_player_info(0);
	print_player_info(1);

	random_config();

	// 2. �� �÷��̾���� �ֻ����� �����ϴ�.
	roll_dice(0);
	roll_dice(1);

	// 3. ���ڸ� üũ�մϴ�
	check_winner(0,1);

	// malloc test
	// => ������ ���� ��(���)�� ���� �ִ� ���� ������� ����
	create_int_dynamic_array(FOR_TEST_MALLOC_INTEGER);

	while (loop_count++ < FOR_TEST_MALLOC_INTEGER)
	{
		put_one_integer_data(loop_count * 2);
	}

	print_integer_dynamic_array();
	
	create_char_dynamic_array(person_name);
	set_name_to_char_dynamic_array(person_name);
	print_char_dynamic_array();
	
	return 0;
}