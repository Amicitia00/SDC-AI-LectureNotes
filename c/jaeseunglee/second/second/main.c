#include <stdio.h>

// ��� : int
// �Է� : int number
// �Լ� �̸� : for_assembly_function_test
int for_assembly_function_test(int number)
{
	return number * 3;
}

int main(void)
{	
	int return_value;
	// const��� Ű���尡 ���Ӱ� ����
	// const => constant => ���
	// const�� �Һ����� ��ǥ��
	// => const�� ������ ����
	// const�� ���̴� ������? 
	// => ���� ȯ�濡�� ������ ���� �� ������ ���ߵ� ���ɼ� ��ü�� ��õ ����
	// �ϴ� const�� ���� ��, ��ü������ ���� �� ������ �ʿ��� ������ const�� ���� 
	const int input_parameter = 211;

	/*int a = 123123;
	const int b = 22;
	int c = 33;
	int c1 = 33;
	int c2 = 33;
	int c3 = 33;
	int c4 = 33;
	int c5 = 33;
	int c6 = 33;
	int c7 = 33;
	int c8 = 33; 
	int c9 = 33;
	int c0 = 33;
	int c11 = 33;
	int c12 = 33;
	int c13 = 33;
	int c14 = 33;
	int c15 = 33;
	int c16 = 33;
	int c17 = 33;*/

	
	return_value = for_assembly_function_test(input_parameter);
	printf("return_value = %d\n", return_value);
	return 0;
}