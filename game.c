#include<stdio.h>

int modifyinv(int answer, void* invptr) {
	int* inv = (int*)invptr;
	if ((answer > 0) && (answer < 101)) {
		int secondanswer;
		printf("Do you want to add the number at this position typing 1 with another or move it if you type anything else?\n");
		scanf("%d", &secondanswer);
		if (secondanswer == 1) {
			printf("Type the position of the number that you wanna add to this number...\n");
			scanf("%d", &secondanswer);

			if ( !( (secondanswer > 0) && (secondanswer < 101) ) ) return 1;
			inv[answer - 1] = inv[answer - 1] + inv[secondanswer - 1];
			if (answer != secondanswer) inv[secondanswer - 1] = 0;
		} else {
			printf("Type the position that you wanna move the number in that position...\n");
			scanf("%d", &secondanswer);

			if ( !( (secondanswer > 0) && (secondanswer < 101) ) ) return 1;
			if (answer == secondanswer) return 1;
			inv[secondanswer - 1] = inv[answer - 1];
			inv[answer - 1] = 0;
		}
	} else {
		int count = 0;
		while ((inv[count] != 0) && (count != 100)) {
			count++;
		}
		if (count != 100) {
			inv[count] = 1;
		} else {
			return 1;
		}
	}
}

int main() {
	printf("Welcome to creatival (vPre-Alpha0.01)!\nThe number ascii art maker with adders starting with ones!\n");
	printf("Type 1-100 to select an inventory slot,\ntype another number to add a one to an inventory slot!\n");
	int inv[100] = {0};
	int answer;
	while (1) {
		printf("[%d][%d][%d][%d][%d]\n", inv[0], inv[1], inv[2], inv[3], inv[4]);
		printf("[%d][%d][%d][%d][%d]\n", inv[5], inv[6], inv[7], inv[8], inv[9]);
		printf("[%d][%d][%d][%d][%d]\n", inv[10], inv[11], inv[12], inv[13], inv[14]);
		printf("[%d][%d][%d][%d][%d]\n", inv[15], inv[16], inv[17], inv[18], inv[19]);
		printf("[%d][%d][%d][%d][%d]\n", inv[20], inv[21], inv[22], inv[23], inv[24]);
		printf("[%d][%d][%d][%d][%d]\n", inv[25], inv[26], inv[27], inv[28], inv[29]);
		printf("[%d][%d][%d][%d][%d]\n", inv[30], inv[31], inv[32], inv[33], inv[34]);
		printf("[%d][%d][%d][%d][%d]\n", inv[35], inv[36], inv[37], inv[38], inv[39]);
		printf("[%d][%d][%d][%d][%d]\n", inv[40], inv[41], inv[42], inv[43], inv[44]);
		printf("[%d][%d][%d][%d][%d]\n", inv[45], inv[46], inv[47], inv[48], inv[49]);
		printf("[%d][%d][%d][%d][%d]\n", inv[50], inv[51], inv[52], inv[53], inv[54]);
		printf("[%d][%d][%d][%d][%d]\n", inv[55], inv[56], inv[57], inv[58], inv[59]);
		printf("[%d][%d][%d][%d][%d]\n", inv[60], inv[61], inv[62], inv[63], inv[64]);
		printf("[%d][%d][%d][%d][%d]\n", inv[65], inv[66], inv[67], inv[68], inv[69]);
		printf("[%d][%d][%d][%d][%d]\n", inv[70], inv[71], inv[72], inv[73], inv[74]);
		printf("[%d][%d][%d][%d][%d]\n", inv[75], inv[76], inv[77], inv[78], inv[79]);
		printf("[%d][%d][%d][%d][%d]\n", inv[80], inv[81], inv[82], inv[83], inv[84]);
		printf("[%d][%d][%d][%d][%d]\n", inv[85], inv[86], inv[87], inv[88], inv[89]);
		printf("[%d][%d][%d][%d][%d]\n", inv[90], inv[91], inv[92], inv[93], inv[94]);
		printf("[%d][%d][%d][%d][%d]\n", inv[95], inv[96], inv[97], inv[98], inv[99]);

		scanf("%d", &answer);
		modifyinv(answer, inv);
	}
}
