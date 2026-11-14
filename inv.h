void printinv(void* invptr) {
	int c = 1;
	int* inv = (int*)invptr;

	while (c <= 80) {
		printf("[%d]", inv[c - 1]);
		if ((c % 10) == 0) {
			printf("\n");
		} c++;
	}
}

int modifyinv(int answer, void* invptr, int* forestnptr, int* healthptr, int* monstercount) {
	int* inv = (int*)invptr;
	if ((answer > 0) && (answer < 81)) {
		int secondanswer;
		printf("Do you want to add the number at this position typing 1 with another or move it if you type anything else?\n");
		scanf("%d", &secondanswer);
		if (secondanswer == 1) {
			printf("Type the position of the number that you wanna add to this number...\n");
			scanf("%d", &secondanswer);

			if ( !( (secondanswer > 0) && (secondanswer < 81) ) ) return 1;
			inv[answer - 1] = inv[answer - 1] + inv[secondanswer - 1];
			if (answer != secondanswer) inv[secondanswer - 1] = 0;
			return 0;
		} else {
			printf("Type the position that you wanna move the number in that position...\n");
			scanf("%d", &secondanswer);

			if ( !( (secondanswer > 0) && (secondanswer < 81) ) ) return 1;
			if (answer == secondanswer) return 1;
			inv[secondanswer - 1] = inv[answer - 1];
			inv[answer - 1] = 0;
			return 0;
		}
	} else {
		int nfromforest = forest(forestnptr, healthptr, monstercount);
		int round = 0;

		while (round != 80 && inv[round] != 0) round++;
		if (round == 80) {
			printf("No space left on inventory!\n");
			return 1;
		} else {
			inv[round] = nfromforest;
			return 0;
		}
	}
}
