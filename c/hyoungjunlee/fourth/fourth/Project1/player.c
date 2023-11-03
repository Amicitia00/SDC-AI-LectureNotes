#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
#include "player.h"

//�迭�� ������ index 0������ �����մϴ�
// ���ǻ��� => ������� �ڵ忡���� �õ��� �޸𸮿� ����(dimension)������ �����ϴ�
// �׷��� ������ �迭�̶�� ǥ�����ٴ� �ٺ��ְ� ���߹迭�̶�� �սô�

// ���� �Ʒ� �ڵ�� player[2][32] ���·� �����˴ϴ�
// �׷��Ƿ� 32�� ¥���� 2�� �ִٴ� ���� �˴ϴ�
// ��� ���� �޸𸮸� ���캼 �� �Ʒ��� ���� ������ ����� ���ɴϴ�

//0x00007FF7E8BED720  66 69 72 73 74 5f 70 6c  first_pl
//0x00007FF7E8BED728  61 79 65 72 00 00 00 00  ayer....
//0x00007FF7E8BED730  00 00 00 00 00 00 00 00  ........
//0x00007FF7E8BED738  00 00 00 00 00 00 00 00  ........   <<<-4�ϱ� 32(8*4)
//0x00007FF7E8BED740  73 65 63 6f 6e 64 5f 70  second_p
//0x00007FF7E8BED748  6c 61 79 65 72 00 00 00  layer...
//0x00007FF7E8BED750  00 00 00 00 00 00 00 00  ........
//0x00007FF7E8BED758  00 00 00 00 00 00 00 00  ........
//��������� �迭�� �Ǿ��� ���� �迭�� �Ǿ��� ���� �޸��� ������ ��
char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;

// test[3][2][10]
//	�� ���¶�� 10���� ������ 2�� ����
//	2 ���ϱ� 10  20���� ������ ��
// �� 20��¥���� ������ 3�� �ִٴ� ��
// ��������� �� 60���� ������ �ִ�
void set_player_info(char name[])
{
	int input_player_name_length = strlen(name);
	//  player[2][32]���� current_player_set_index�� ����
	// 0��, 1���� �����ϰ��� �ϴ� ����

	// ********�迭�� �ε��� ������ 0���� �����մϴ�********
	// ȥ���� �߻��ϴ� ��ǥ���� ������
	// �迭�� ���� ���� ����� ������ ���� ����
	//����� ���� 0�� ���� �����ؼ� �߻��ϴ� ȥ��

	//1.�迭�� �̸��� �迭�� ���� �ּ�
	strncpy(player[current_player_set_index++], name, input_player_name_length + 1);

}

void print_player_info(int index)
{
	printf("����� %d�� �̸���= %s\n", index, player[index]);
}