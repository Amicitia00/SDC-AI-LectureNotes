#include <stdio.h>
#include "player.h"

int main(void) {
	int loop;
	char* nickname[MAX_PLAYER_NUMBER] = {
		"�Թ���������",
		"�ִ԰�����"
	};

	printf("���� Ǯ��!\n");
	for (loop = 0; loop < MAX_PLAYER_NUMBER; loop++) {
		init_player_nickname(nickname[loop]);
	}
	print_player_list();

	return 0;
}