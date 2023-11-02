# define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include "player.h"

// ������ Ÿ�� char (1byte) <- ���� ���� ����
char player_name[PLAYER_NAME_MAX];

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

void print_player_name(void)
{
	// %s �� ���ڿ��� ����� �� ��� (���� ���)
	printf("����� �̸��� %s\n", player_name);
}