#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	set_player_info("����");
	set_player_info("����");

	print_player_info(0);
	print_player_info(1);

	random_config();
	roll_dice(0);
	roll_dice(1);

	print_dice_number(0);
	print_dice_number(1);

	int player1dice = print_dice_number(0);
	int player2dice = print_dice_number(1);


}




/*int main() {
	

	char player1 = "����";
	char player2 = "����";

	int player1dice = dice();
	printf("������ �ֻ����� %d\n", player1dice);

	int player2dice = dice();
	printf("�c�� �ֻ����� %d\n", player2dice);

	if (player1dice < player2dice) {
		printf("�c�� �¸�\n");
	}
	if (player1dice > player2dice) {
		printf("������ �¸�\n");

	}
	if (player1dice == player2dice) {
		printf("���º��Դϴ�.");

	}
}
*/