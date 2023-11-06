
#define _CRT_SECURE_NO_WARNINGS 
#include <string.h>
#include "player.h"


//������ Ÿ�� char (1 byte) <- ���ڸ� ������ �� ���� 
// �迭�� ����� ��� 
// 1. ������ Ÿ���� ���´�.. 
// 2. �迭�� �̸��� ���´�. 
// 3. ���ȣ�� ���� �迭�� ������ ���´�. ex) [PLAYER_NAME_MAX] 
// 4. �ʿ��ϴٸ� �ʱ�ȭ�� �ϴµ� �켱�� �����Ѵ�. 
char player_name[PLAYER_NAME_MAX];

void set_player_name(char name[])
{
	// string length�� ���ڷ� ���ڿ��� ���̸� ���Ѵ�. 
	const int player_name_length = strlen(name);

	//strncpy�� ���ڿ��� ������ ���ڸ�ŭ �����մϴ�. 
	// strncpy(����� ��ġ, ������ �༮, ������ ����) 
	//			������ ������ ����(���� 1��) ������ �̷������. 
	//			�߰������� �ѱ��� �� ���ڴ� 2~3 byte �� �����ϹǷ� ����� �ٸ� ���ڰ� ���� �� �ִ�. 
	strncpy(player_name, name, player_name_length + 1);
}

void print_player_name(void)
{
	//%s�� ���ڿ��� ����� �� ����Ѵ�. (���ڿ� ���) 
	printf("����� �̸��� %s\n", player_name);
}