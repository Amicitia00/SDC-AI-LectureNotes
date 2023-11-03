#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "player.h"


// �迭�� ������ index 0���� ���۵�
// ���� ���� => ������� �ڵ忡���� �� �� �޸Ӹ��� ���� ������ ����
// �׷��� ������ �迭�̶�� ǥ�� ���ٴ� ���� �迭
// ���� �Ʒ� �ڵ�� player[2][32] ���·� ���� < �������丮 ���� Ȯ�� : �� ū ����(?) �� �տ� ��ġ
// �׷��Ƿ� 32�� ¥���� 2�� �ִٴ� ��
// ��� ���� �޸𸮸� ��ǥ �� �� �Ʒ��� ���� ������ ����� ���´�.
// �������丮 Ȯ�� player
// ��������� �迭�� �Ǿ��� ���� �迭�� �Ǿ��� ���� �޸��� ����
// [][] ���� �� �տ��� ū ����
char player[MAX_PLAYER_NUMBER][MAX_PLAYER_NAME_LENGTH];
int current_player_set_index;

void set_player_info(char name[])
{	int input_player_name_length = strlen(name);
// player[2][32]���� current_player_set_index�� ���� 0��, 1���� �����ϰ��� �ϴ� ����
// index ������ 0 ���� �����ϴµ� ��� �� ������ �򰥸��� �ʱ�
// ex) ��� �� ���� 2�� = index 0, 1
// �迭�� �̸��� �迭�� ���� �ּ�
	strncpy(player[current_player_set_index++], name, input_player_name_length + 1); // <-- ��� �߻�(�� ó��)�� ���� +1 ĭ �߰� ����
	}

void print_player_info(int index)
{
	printf("����� %d �� �̸��� = %s\n", index, player[index]);
}