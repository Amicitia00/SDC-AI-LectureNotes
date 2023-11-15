#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include "player.h"
#include "dice_game.h"
#define PLAYER_NAME_MAX				32

// ������ Ÿ�� char (1byte) <- ���ڸ� ������ �� ����
// �迭�� ����� ���
// -> ���� ����� ����� ������
// 1. ������ Ÿ���� �����ϴ�.
// 2. �迭�� �̸��� �����ϴ�.
// 3. ���ȣ�� ���� �迭�� ������ �����ϴ�. ex) [PLAYER_NAME_MAX]
// 4. �ʿ��ϴٸ� �ʱ�ȭ�� �ϴµ� �켱�� �����մϴ�.
char player_name[PLAYER_NAME_MAX];

void set_player_name(char name[])
{
	// string length�� ���ڷ� ���ڿ��� ���̸� ���մϴ�.
	const int play_name_length = strlen(name);
	// strncpy �� ���ڿ��� ������ ���ڸ�ŭ �����մϴ�.
	// strncpy(����� ��ġ, ������ �༮, ������ ����)
	//         ������ ������ ���� (���� 1��) ������ �̷�����ϴ�.
	//		   �߰������� �ѱ��� �� ���ڴ� 2 ~ 3 byte �� �����Ƿ� ����� �ٸ� ���ڰ� ���� �� �ֽ��ϴ�.
	strncpy(player_name, name, play_name_length + 1);
}

void print_player_name(void)
{
	// %s �� ���ڿ��� ����� �� ����մϴ� (���� ���)
	printf("\n�����1 �̸��� %s\n", player_name);
	printf("�����1�� �ֻ������� = %d", dice_number);
	printf("\n�����2 �̸��� %s\n", player_name);
	printf("�����2�� �ֻ������� = %d", dice_number2);
}