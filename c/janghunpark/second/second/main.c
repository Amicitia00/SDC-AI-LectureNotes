#include <stdio.h>

// ���: int
// �Է�: int number
// �Լ� �̸�: for_assembly_function_test
const int for_assembly_function_test(const int number)
{
	return number * 2;
}

int main(void)
{
	int return_value;
	// const��� Ű�����, constant�� ���ڷ� ����� �ǹ�
	// �����ϰ� ������ const�� �Һ����� ��ǥ = ������ �ʴ� ����
	// const�� �� �ٿ��� �����ϴµ� ���ŷӰ� ���̴� ����?
	// ���� ȯ�濡�� ���� ���� �� ������ ���ߵ� ���ɼ� ��ü�� ��õ ������ �� �ֱ� ����
	// const�� ���̸� ������ �Ϸ� �� �� compile ��ü�� �� ��
	const int input_parameter = 3;
	return_value = for_assembly_function_test(input_parameter);
	printf("return_value = %d\n", return_value);

	return 0;
}