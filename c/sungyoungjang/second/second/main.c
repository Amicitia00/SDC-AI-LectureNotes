#include <stdio.h>

// ��� : int
// �Է� : int number
// �Լ��̸� : for_assembly_function_test
//


const int for_assembly_function_test(const int number)
{
	return number * 2;
}

int main(void)
{
	int return_value;
	const int input_parameter = 3;

	// 'const' ��� Ű���尡 ���Ӱ� ����
	// const �� �����ΰ�?
	// constant�� ���� = ���
	// �����ϰ� ������ const�� �Һ����� ��ǥ.
	//�Һ����̶�? - ������ �ʴ� ����
	// const�� �Ⱥٿ��� �����ϴµ� ���ŷӰ� ���̴� ����.
	// **<���� ȯ�濡�� ������ ���� �� ������ ���ߵ� ���ɼ��� ��ü�� ��õ �����ϱ� ����>**
	//
	return_value = for_assembly_function_test(input_parameter);
	printf("return = %d\n", return_value);
	return 0;
}