#include <stdio.h>

// ���: int, �Է�: int number, �Լ� �̸�: for_assembly_function_test
const int for_assembly_function_test(const int number)
{
	return number * 2; 
}

int main(void)
{
	int return_value; 
	//const�� �����ϱ�?
	// - constant �����Դϴ�. (���) const�� �Һ����� ��ǥ�մϴ�. 
	// �Һ����̶�? -> ������ �ʴ� ���� 
	// const �� �� �ٿ��� �����ϴµ� ���� ���̴� ������ �����ΰ�? 
	// - ���� ȯ�濡�� ������ ���� �� ������ ���ߵ� ���ɼ� ��ü�� ��õ �����ϱ� ����  
	const int input_parameter = 3;
	return_value = for_assembly_function_test(input_parameter);
	printf("return value = %d\n", return_value);

	return 0;
}