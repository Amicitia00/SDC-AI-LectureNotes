/*
����� 2���� ���� �� ����ڵ��� �̸��� �����ϵ��� �����մϴ�.
������ ����� 2���� ���� �ֻ����� 2���� �����ϴ�.

����: �Ʒ� ������ �ݵ�� �������� �մϴ�.
ù ��° �ֻ����� ¦����� �� ��° �ֻ����� �����ϴ�.
�� ��° �ֻ����� ������ �ջ�Ǹ� ��ų�� ����� �� �ֽ��ϴ�.
(�� ù ��° �ֻ����� Ȧ���� �� ��° �ֻ����� ���� �� �����ϴ�)

(�� ��° �ֻ��� - ��ų�� ����)
���� 2�� ������ �ڽ��� �ֻ����� + 3�� �����մϴ�.
���� 4�� ������ �׳� �׽��ϴ� (�ڻ�)
���� 3�� ������ ����� ������ -4�� �����մϴ�.

�� ����� �����Ͽ� ���ڸ� �����غ��ô�!
*/

#include <stdio.h>
#include "player.h"
#include "dice.h"
#include "random_generator.h"



int main(void)
{
	// 1. �÷��̾� �̸� ���� 
	char person_name1[32] = "����0";
	char person_name2[32] = "����1";

	create_char_dynamic_array(person_name1);
	set_name_to_char_dynamic_array(person_name1);
	print_char_dynamic_array();

	create_char_dynamic_array(person_name2);
	set_name_to_char_dynamic_array(person_name2);
	print_char_dynamic_array();

	
	// 2. �ֻ��� 2�� ����
	random_config();

	roll_dice(0);
	roll_dice(1);

	print_dice_number(0);
	print_dice_number(1);


	// 3. 
}