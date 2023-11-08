#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "malloc_test.h"


// ó�� �����ϴ� ������
// �����ʹ� ������ ����� ȥ���������� ���� �������� �༮�Դϴ�.
// ���������� int�� '*'�� ������ �����Ѵ� ������ �����մϴ�.
// �׷��� �����Ϳ����� 'int *'�� ������ Ÿ���Դϴ�.
// 'int'�� 'int*'�� �����Ѵٸ� �� ���� ���� �ٸ� '������Ÿ��'�Դϴ�.
int* integer_dynamic_array;
int current_integer_dynamic_array_index;

char* char_dynamic_array;
int current_char_dynamic_array_index;

int* dice_game_score;
int current_dice_game_score_index;



void test_local_variable(void)
{

}

void create_int_dynamic_array(int count)
{
	// malloc => Memory Allocation�� ���
	// �Ϲ������� ���α׷����� �� �� �ݵ�� �˾ƾ� �ϴ� 4���� ������ �����մϴ�.
	// Stack : ���� ����
	// Heap : ���� �Ҵ�(new, malloc)
	// Date : ��������
	// Text : ���� ����

	// malloc�� �ϸ� Heap�� Memory�� �Ҵ��ϰ� �˴ϴ�.
	// �Ҵ�� �޸��� �ּҰ��� ���(���ϰ�)���� �����ϴ�.

	// ������ ������ ����:
	// Ư���� ������ Ÿ���� �޸� �ּ� ���� ������ �� �ִ� �޸� ����(�迭�� ���� �迭�� ������ �ּҰ� ����)
	// sizeof(int)�� ����Ʈ ���� �����ɴϴ� => 4
	// ������� �迭�� �̸��� �迭�� ���� �ּ��̰�
	// Heap�� �Ҵ�� �޸� �ּҸ� �޾ƿ����Ƿ�
	// Heap�� ������ �迭ó�� ��� �� �� �ְ� �˴ϴ�.
	// �׸��� malloc �տ� �ִ� (int *)��
	// int �� �����ͷ� �� �ּҸ� ���ڴٴ� ���� �ǹ��մϴ�.

	// ���� malloc(sizeof(int) * count)�� malloc(4*5)�� malloc(20)�� �ǹ��մϴ�.
	// ��� 20byte�� ������ Heap�� �Ҵ��Ͽ���
	// int *�� �ٶ󺸹Ƿ� int 5��¥�� �迭�� �����մϴ�. 
	// int arr[5] �� ���ٴ� ���Դϴ�
	// ���⼭ 5�� main�� �ִ� #define FOR_TEST_DYNAMIC_ARRAY_COUNT		5 �� 5�� ��Ÿ���� �� ������ �����մϴ�.
	// �� �̷��� ���·� �ڵ带 �ۼ��ϸ�
	// int arr[count]���·� �迭�� ���� �� �ֽ��ϴ�
	integer_dynamic_array = (int*)malloc(sizeof(int) * count);
}

bool put_one_integer_data(int data)
{
	integer_dynamic_array[current_integer_dynamic_array_index++] = data;
	return true;
}

void print_integer_dynamic_array(void)
{
	int index;
	printf("malloc�� ���� �������� ������ �迭 ���: \n");

	for (index = 0; index < current_integer_dynamic_array_index; index++)
	{
		printf("%3d", integer_dynamic_array[index]);
	}
	printf("\n");
}

void create_char_dynamic_array(char* name)
{
	// malloc �� �κп� (char *) Ȥ�� (int *) ���·� �پ� �ִ� ������ �ֽ��ϴ�.
	// �̰��� ���� ĳ�����ε� ���� malloc�� ���� Ÿ���� void*�̱� ������ �׷����ϴ�.
	char_dynamic_array = (char*)malloc(sizeof(char) * (strlen(name) + 1));
}

void set_name_to_char_dynamic_array(char* name)
{
	strncpy(char_dynamic_array, name, strlen(name) + 1);
}

void print_char_dynamic_array(void)
{
	printf("char_dynamic_array = %s\n", char_dynamic_array);
}


void create_dice_game_score(int count)
{
	dice_game_score = (int*)malloc(sizeof(int) * count);
}

bool put_dice_game_score(int data)
{
	dice_game_score[current_dice_game_score_index++] = data;
	return true;
}
