#include <stdio.h>


// ���: int
// �Է�: int number
// �Լ� �̸�: for_assembly_fuction_test
const int for_assembly_function_test(const int number)
{
	return number * 2;
}

int main(void)
{
	int return_value;
	// 'const' -> constant(���)�� ����. �Һ����� ��ǥ��. 
	// �Һ���: ������ �ʴ� ����.
	// const�� ���̴� ����: ���� ȯ�濡�� ������ ���� �� ������ ���ߵ� ���ɼ� ��ü�� ��õ ���� 
	const int input_parameter = 3;
	return_value = for_assembly_function_test(input_parameter);
	printf("return_value = %d\n", return_value);

	return 0;
}