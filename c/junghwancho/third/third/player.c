# define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "player.h"

// ������ Ÿ�� char (1byte) <- ���� ���� ����
// �迭�� ����� ���
// -> ���� ����� ����� ������
// 1. ������ Ÿ���� ���´�.
// 2. �迭�� �̸��� ���´�.
// 3. ���ȣ�� ���� �迭�� ������ ���´�. ex) [PLAYER_NAME_MAX]
// 4. �ʿ��ϴٸ� �ʱ�ȭ�� �ϴµ� �켱�� �����Ѵ�.
char player_name[PLAYER_NAME_MAX];
char player1[PLAYER_NAME_MAX];
char player2[PLAYER_NAME_MAX];

void set_player_name(char name[])
{
	// string length�� ���ڷ� ���ڿ��� ���̸� ���� �� ���
	const int player_name_length = strlen(name);
	// strncpy �� ���ڿ��� ������ ���ڸ�ŭ ����
	// strncpy (����� ��ġ, ������ ���, ������ ����)
	//			������ ������ ���� (���� 1��) ������ �̷����
	//			�߰������� �ѱ��� �� ���ڴ� 2~3byte �� �ҿ�Ǿ� ����� �ٸ� ���ڰ� ���� �� ����

	strncpy(player_name, name, player_name_length + 1);

}

void set_player1(char name[])
{
	const int player1_length = strlen(name);
	strncpy(player1, name, player1_length + 1);
}

void set_player2(char name[])
{
	const int player2_length = strlen(name);
	strncpy(player2, name, player2_length + 1);
}

void print_player_name(void)
{
	// %s �� ���ڿ��� ����� �� ��� (���� ���)
	printf("����� �̸��� %s\n", player_name);
}