#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "malloc_test.h"


// ó�� �����ϴ� ������
// �����ʹ� ������ ����� ȥ���������� ���� �������� �༮�Դϴ�.
// ���������� int�� '*' �� ������ �����ϴ� ������ �����մϴ�.
// �׷��� �����Ϳ����� 'int *' �� ������ Ÿ���Դϴ�.
// 'int' �� 'int *' �� �����Ѵٸ� �� ���� ���� �ٸ� '������Ÿ��' �Դϴ�.

int* integer_dynamic_array;
int current_integer_dynamic_array_index;

void creat_int_dynamic_array(int count)
{
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
	printf("mallloc�� ���� �������� ������ �迭 ��� :\n");

	for (index = 0; index < current_integer_dynamic_array_index; index++)
	{
		printf("%3d", integer_dynamic_array[index]);
	}
	printf("\n");
}

void creat_char_dynamic_array()
{
	
}