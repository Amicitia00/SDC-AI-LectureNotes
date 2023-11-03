#include "malloc.h"
#include <stdlib.h>

#include <stdio.h>


// ó�� �����ϴ� ������
// �����ʹ� ������ ����� ȥ���������� ���� �����´�
// ���������� int�� *�� ������ �����ϴ� ������ ����
// �׷��� �����Ϳ����� 'int *' �� ������ Ÿ��
// int�� int *�� �����Ѵٸ� �ΰ��� ���� �ٸ� '������ Ÿ��'�̴�
int* integer_dynamic_array;
int current_integer_dynamic_array_index;


void create_int_dynamic_array(int count)
{
	
	// malloc => Memory Allocation�� ����
	// �Ϲ������� ���α׷����� �� �� �ݵ�� �˾ƾ� �ϴ� 4���� ������ ����
	// Stack : ���� ����
	// Heap : ���� �Ҵ�(new malloc)
	// Data : ���� ����
	// Text : ���� ����

	// malloc�� �ϸ� Heap�� Memory�� �Ҵ�
	// �Ҵ�� �޸��� �ּҰ��� ���(����)���� �����ϴ�.

	// ������ ������ ���� :
	// Ư���� ������ Ÿ���� �޸� �ּ� ���� ������ �� �ִ� �޸� ����
	// sizeof(int)�� ����Ʈ ���� �����ɴϴ� => 4byte

	// ��������� �迭�� �̸��� �迭�� �����ּ��̰�
	// Heap�� �Ҵ�� �޸� �ּҸ� �޾ƿ����Ƿ�
	// Heap�� ������ �迭ó�� ����� �� �ְ� �˴ϴ�.
	// �׸��� malloc �տ� �ִ� (int *0��
	// int�� �����ͷ� �� �ּҸ� ���ڴٴ� ���� �ǹ��մϴ�.

	// 4byte * count(5) -> 20byte�� ������ Heap�� �Ҵ� ��
	// �̰��� int* (��Ʈ�� ����Ʈ ����)�� �����Ѵ�
	// == 5���� int �迭�� �������.
	// == arr[5]
	// �̷��� ���·� �ڵ带 �ۼ��ϸ� 
	// int arr[count]���·� �迭�� ���� �� �ִ�.
	integer_dynamic_array = (int *)malloc(sizeof(int) * count);
}

bool put_one_integer_data(int data)
{
	
	integer_dynamic_array[current_integer_dynamic_array_index++] = data;
	return true;
}

void print_integer_dynamic_array()
{
	int index;
	printf("malloc�� ���� �������� ������ �迭 ��� \n");
	for (index = 0; index < current_integer_dynamic_array_index; index++)
	{
		printf("%3d", integer_dynamic_array[index]);
	}
	printf("\n");
}

void create_char_dynamic_array()
{

}

