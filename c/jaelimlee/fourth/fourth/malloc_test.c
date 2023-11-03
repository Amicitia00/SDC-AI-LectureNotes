#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "malloc_test.h"


// ó�� �����ϴ� ������
// �����ʹ� ������ ����� ȥ���������� ���� ������
// ���������� int�� '*'�� ������ �����ϴ� ������ ����
// �׷��� �����Ϳ����� 'int *' �� ������ Ÿ��
// 'int'�� 'int *'�� �����Ѵٸ� �� ���� ���� �ٸ� '������ Ÿ��'

int *integer_dynamic_array;
int current_integer_dynamic_array_index;

char* char_dynamic_array;
int current_char_dynamic_array_index;

void test_local_variable(void)
{
	int test_variable = 3;
}

void create_int_dynamic_array(int count)
{
	// malloc -> Memory Allocation�� ���
	// �Ϲ������� ���α׷����� �� �� �ݵ�� �˾ƾ� �ϴ� 4���� ������ ����
	// Stack: ���� ����
	// Heap: ���� �Ҵ�(new, malloc)
	// Data: ���� ����
	// Text: ���� ����

	// malloc�� �ϸ� Heap�� Memory�� �Ҵ��ϰ� ��.
	// �Ҵ�� �޸��� �ּҰ��� ���(���ϰ�)���� ��

	// ������ ������ ����: Ư���� ������ Ÿ���� �޸� �ּҰ��� ������ �� �ִ� �޸� ����
	// sizeof(int)�� ����Ʈ ���� ������. => 4(int�� 4����Ʈ)
	// ��������� �迭�� �̸��� �迭�� ���� �ּҰ�
	// Heap�� �Ҵ�� �޸��ּҸ� �޾ƿ����Ƿ�
	// Heap�� ������ �迭ó�� ����� �� �ְ� ��.
	// �׸��� malloc �տ� �ִ� (int *)�� int �� �����ͷ� �� �ּҸ� ���ڴٴ� ���� �ǹ�
	// ���� malloc(sizeof(int) * count)�� malloc(4*5)�� malloc(20)�� �ǹ�
	// ��� 20byte�� ������ Heap�� �Ҵ��Ͽ��� int *�� �ٶ󺸹Ƿ� int 5��¥�� �迭�� ����
	// int arr[5]�� ���ٴ� ��
	// �� �̷��� ���·� �ڵ带 �ۼ��ϸ� int arr[count] ���·� �迭�� ���� �� ����.
	integer_dynamic_array = (int *)malloc(sizeof(int) * count);
}

bool put_one_integer_data(int data)
{
	integer_dynamic_array[current_integer_dynamic_array_index++] = data;
	return true;
}

void print_integer_dynamic_array(void)
{
	int index;
	printf("mallioc�� ���� �������� ������ �迭 ���: \n");

	for (index = 0; index < current_integer_dynamic_array_index; index++)
	{
		printf("%3d", integer_dynamic_array[index]);
	}
	printf("\n");
}

void create_char_dynamic_array(char *name)
{
	char_dynamic_array = (char*)malloc(sizeof(char) * (strlen(name) +1));
}

void set_name_to_char_dynamic_array(char* name)
{
	strncpy(char_dynamic_array, name, strlen(name) + 1);
}

void print_char_dynamic_array(void)
{
	printf("char_dynamic_array = %s\n", char_dynamic_array);
}