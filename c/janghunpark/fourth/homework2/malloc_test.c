#define _CRT_SECURE_NO_WARNINGS

#include "malloc_test.h"
#include <stdlib.h>
#include <string.h>

#define INT_DYNAMIC_ARRAY_MAX			5

/* ó�� �����ϴ� ������
* �����ʹ� ������ ����� ȥ���������� ���� ������
* ���������� int�� *�� ������ �����ϴ� ���� ����
* �׷��� �����Ϳ����� 'int*'�� ������ Ÿ����
* int �� int* �� �����Ѵٸ� �� ���� ���� �ٸ� ������ Ÿ����
*/

int *integer_dynamic_array;
int current_integer_dynamic_array_index;

char* char_dynamic_array;
int current_char_dynamic_array_index;

void test_local_variable(void)
{

}

void create_int_dynamic_array(int count)
{
	/* malloc -> memory allocation�� ���
	* �Ϲ������� ���α׷����� �� �� �ݵ�� �˾ƾ� �ϴ� 4���� ������ �����Ѵ�
	* stack: ���� ����
	* heap: ���� �Ҵ�(new, malloc)
	* data: ���� ����
	* text: ���� ����
	* 
	* malloc�� �ϸ� Heap�� Memory�� �Ҵ��ϰ� �ȴ�.
	* �Ҵ�� �޸��� �ּҰ��� ���(���ϰ�)���� ����.
	* 
	* ������ ������ ����: 
	* Ư���� ������ Ÿ���� �޸� �ּ� ���� ������ �� �ִ� �޸� ����
	* sizeof(int)�� ����Ʈ ���� ������ -> 4
	* ��������δ� �迭�� �̸��� �迭�� ���� �ּҰ�
	* Heap�� �Ҵ�� �޸� �ּҸ� �޾ƿ����Ƿ� 
	* Heap�� ������ �迭ó�� ����� �� �ְ� �˴ϴ�
	* �׸��� malloc �տ� �ִ� (int*)�� 
	* int �� �����ͷ� �� �ּҸ� ���ڴٴ� ���� �ǹ��մϴ�.
	* 
	* ���� malloc(sizeof(int) * count)�� malloc(4 * 5)�� malloc(20)�� �ǹ�
	* ��� 20byte�� ������ Heap�� �Ҵ��Ͽ���
	* int *�� �ٶ󺸹Ƿ� int 5��¥�� �迭�� �����մϴ�. 
	* int arr[5] �� ���ٴ� ��
	* �� �̷��� ���·� �ڵ带 �ۼ��ϸ� 
	* int arr[count] ���·� �迭�� ���� �� �ֽ��ϴ�.
	*/
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
	printf("malloc�� ���� �������� ������ �迭 ���: \n");

	for ( index = 0; index < current_integer_dynamic_array_index; index++)
	{
		printf("%3d", integer_dynamic_array[index]);
	}
	printf("\n");
}

void create_char_dynamic_array(char* name)
{
	/* malloc �� �κп� (char *) Ȥ�� (int *) ���·� �پ� �ִ� ������ �ֽ��ϴ�
	* �̰��� ���� ĳ�����ε� ���� malloc�� ���� Ÿ���� void * �̱� ������ �׷����ϴ�
	*/
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