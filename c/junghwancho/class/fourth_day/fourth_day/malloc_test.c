#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "malloc_test.h"

#define INT_DYNAMIC_ARRAY_MAX		5


//ó�� �����ϴ� ������
//�����ʹ� ������ ����� ȥ���������� ���� �������� �༮
//���������� 'int'�� '*' �� ������ �����ϴ� ����
//�׷��� �����Ϳ��� 'int *' �� ������ Ÿ��.
//'int' �� 'int *'�� �����Ѵٸ� �� ���� ���� �ٸ� '������Ÿ��'
int* integer_dynamic_array;
int current_integer_dynamic_array_index;

char* char_dynamic_array;
int current_char_dynamic_array_index;

void test_local_variable(void)
{
	int test_variable = 3;
}

void create_int_dynamic_array(int count)
{
	//malloc => Mmory Allocation
	// �Ϲ������� ���α׷��� �� �� �ݵ�� �˾ƾ� �ϴ� 4����
	// stack : ���� ����
	// heap : ���� �Ҵ� (new, malloc)
	// data : ���� ����
	// test : ���� ����

	// malloc�� �ϸ� heap �� memory �Ҵ� < �Լ��� �������� ���� �����ϴٴ� ��
	// �Ҵ�� �޸��� �ּҰ��� ���(���ϰ�)���� ��

	// ������ ������ ����
	// Ư���� ������ Ÿ���� �޸� �ּ� ���� ������ �� �ִ� �޸� ����
	// sizeof(int)�� ����Ʈ ���� ������ => 4
	// ��������� �迭�� �̸��� �迭�� ���� �ּ��̸�
	// heap�� �Ҵ�� �޸� �ּҸ� �޾ƿ����Ƿ�
	// heap�� ������ �迭ó�� ��� �� �� �ְ� ��
	// �׸��� malloc �տ� �ִ� (int *)�� int �� �����ͷ� �� �ּҸ� ���ڴٴ� ���� �ǹ�

	// ���� malloc(sizeof(int) * count)�� malloc(4 * 5)�� malloc(20)�� �ǹ���
	// ��� 20byte�� ������ heap�� �Ҵ��Ͽ���
	// int *�� �ٶ󺸹Ƿ� int 5��¥�� �迭�� ����
	// int arr[5]�� ���ٴ� ��
	// �� �̷��� ������ �ڵ带 �ۼ��ϸ� int arr[count] ���·� �迭�� ���� �� ����
	integer_dynamic_array = (int*)malloc(sizeof(int) * count); // �ٽ�
}
// bool �� ��/���� ����
bool put_one_integer_data(int data)
{
	integer_dynamic_array[current_integer_dynamic_array_index++] = data;
	return true;
}

void print_integer_dynamic_array(void)
{
	int index;
	printf("\n malloc�� ���� �������� ������ �迭 ���: \n");

	for (index = 0; index < current_integer_dynamic_array_index; index++)
	{
		printf("%3d", integer_dynamic_array[index]);
	}
	printf("\n");
}

void create_char_dynamic_array(char* name)
{
	//malloc �� �κп� (char*) Ȥ�� (int*) ���·� �پ� �ִ� ������ �ִµ�
	// �̰��� ���� ĳ�����̶�� �� : ���� malloc�� ���� Ÿ���� void *(void ������) �̱� ������ �׷�
	// malloc�� �뵵�� �پ��� �� ���� ����, �Ҽ���, ���ڿ� �� ������ �پ��ϴϱ�
	// �ʱ� ������ void *(�ƹ� �����͵� ���ٶ�� ��) ���� �س��� ����ڰ� �˾Ƽ� �´� �����ͷ� ĳ���� �ؼ� ��� 
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