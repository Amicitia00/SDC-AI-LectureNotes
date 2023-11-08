#include <stdio.h>
#include "print_even.h"

// define A B ��� ���´ٸ�
// A�� B�� ��ü�ϰ����� �ǹ��մϴ�.
// �׷��� ��ü�ϴ� ������ �����ϱ��?
// �������� ��Ȯ�ϰ� ����� ���ؼ� #define�� ����մϴ�.

// Q. const�� #define�� ����
//		const�� ��� ����� �Һ��� ����
//		#define�� �ϰ����� �����ϱ� ����
#define EVEN_DECISION_NUMBER 2

void print_even_number_from_start_to_end(int start, int end)
{
	//���� ���� �󸶳�?
	int current_number;
	
	//���� - ������ �� ���̹Ƿ�
	//current_number = ����(start)
	//current_number++ <- ���⼭ '++'�� �ܼ��� ���ϱ� 1�� �ǹ��Ѵ�

	// - �⺻���� for���� ���۰���
	//	for (�ʱ⼳��; ����; ����) { ������ ���� �Ҷ����� ������ �ݺ���ų ������}
	// 
	// - �ʱ⼳�� : for���� ������ �� ���� 1���� �����
	// - ���� : ������ ������ ��� �߰�ȣ('{ }') ������ �ڵ尡 �����
	//			���� ������ �������� ���� ��� �״�� for���� �������´�
	//			������ �����Ǹ� ������ ���� �ʰ� �ٷ� �߰�ȣ ��Ʈ�� ����ȴ�.
	// - ���� : �߰�ȣ('{ }') ��Ʈ�� ����� ���� ������ ������
	
	//	�ʱ� �����̴� ������ ��� ���Ǹ� �����Ѵٸ� for���� �����Ѵ�.
	for (current_number = start; current_number <= end; current_number++)
	{
		// -if���� ���� ����
		// �Ұ�ȣ ���ο� ������ �����ȴٸ� �߰�ȣ �ڵ带 �����ϸ�
		// ������ �������� �ʴ´ٸ� �������´�.
		// 
		// current_number ������ EVEN_DECISION_NUMBER��
		// ������ ���� 0�� �´°��� ���� ���ǹ��̴�
		//
		if (current_number % EVEN_DECISION_NUMBER == 0)
		{
			printf("�� ��ȣ�� ¦���Դϴ�: %d\n", current_number);
		}
	}
}