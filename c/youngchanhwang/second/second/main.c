#include <stdio.h>

// ��� : int
// �Է� : int number
// �Լ��̸� : for_assembly_function_test

int for_assembly_function_test(int number)
{
	return number * 2;
}

int main(void)
{
	int return_value;
	
	// 'const' ��� Ű���尡 ���Ӱ� ��������
	// const �� �����ϱ�?
	// constant �� �����Դϴ�.(���)
	// �����ϰ� ������ const �� �Һ����� ��ǥ�մϴ�.
	// �Һ����̶� �����ΰ�?
	// * ������ �ʴ� ����
	// const �� �ٿ��� �����ϴµ� ���ŷӰ� �̰��� ���̴� ������ �����ΰ�?
	// . ���� ȯ�濡�� ������ ���� �� ������ ���ߵ� ���ɼ� ��ü�� ���� �����ϱ� ����

	// �����ϸ� const �� ���̴� ���� ����.
	int input_parameter = 10;
	return_value = for_assembly_function_test(input_parameter);
	printf("return_value = %d\n", return_value);
	
	return 0;
}