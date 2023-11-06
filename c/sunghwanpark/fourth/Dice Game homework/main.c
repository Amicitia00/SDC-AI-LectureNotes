
/*
����� 2���� ���� �� ����ڵ��� �̸��� �����ϵ��� �����Ͻÿ�. 
������ ����� 2���� �ֻ����� ������ �ֻ����� ������ ���ڰ� ū ����� �̱⵵�� ����Ͻÿ�. 
*/

// Domain (����) �и��ϱ� - ���� ��Ȳ���� �ʿ��ϴٰ� �����Ǵ� �͵��� ������ 
// �����ϸ鼭 �ʿ��� �͵��� �������� �߰��ϸ� �ȴ�.  
// ������ ���� (Waterfall)�� ���� �̸� �� �������� �ϴµ� ���� Agile ����� ����ϸ� �ʿ����
// [ �� XP => eXtreme Programming ����� �ʿ��� => �Լ� �������� ] 
// 
// �����, �ֻ��� 
//  

#include <stdio.h>
#include "player.h"
#include "dice_game.h"
#include "random_generator.h"
#include "win.h"
#include "malloc_test.h"

#define FOR_TEST_DYNAMIC_ARRAY_COUNT 5


int main(void)
{
// Agile ����� ���� �� ���� �߿��� �� 
// - ���� ������ ���� ������� �ϸ� ���Ѵ�. �ֻ��� �����ٸ� ���� ������ �Ѵ�. 

	// ���� �������� �ֻ��� �����ٴ� �Ʒ��� ����. (�Ҽ��� ���ٰ� �����ϸ� ��.) 
	
	int loop_count=0;

	/*
	int i; 

	// test_array�� �ᱹ malloc()�� ���� �Ҵ� ���� �޸� �����̶�� ���� ����Ͻÿ�. 
	int test_array[100] = {1,2,3};
	int* test_pointer = test_array;
	for (i = 0; i < 100; i++) {
		printf("�����͸� �迭ó�� ��� �� �� ����: %d\n",test_pointer[i]);
	}
	
	*/

	char person_name[32] = "�ȳ��ϼ���";

	// 1. �÷��̾� �̸��� �����Ѵ�. 
	set_player_info("first_player");
	set_player_info("second_player");

	print_player_info(0);
	print_player_info(1);

	// 2. �� �÷��̾���� �ֻ����� ������.  
	random_config();
	roll_dice(0);
	roll_dice(1);

	print_dice_number(0);
	print_dice_number(1);

	// 3. ���� �ֻ����� ������ ���� ���ڸ� �����Ѵ�. 
	check_winner(0,1);

	//malloc test 
	// ������ ���� ��(���)�� ���� �ִ� ���� ���� ���� �ʴ�. 
	create_int_dynamic_array(5);
	while (loop_count++<FOR_TEST_DYNAMIC_ARRAY_COUNT) {
		put_one_integer_data(loop_count * 2);
	}
	print_integer_dynamic_array();;
	
	create_char_dynamic_array(person_name);
	set_name_to_char_dynamic_array(person_name);
	print_char_dynamic_array();


	return 0;
}