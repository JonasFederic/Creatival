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

int eplrinv(void* invptr, int* forestnptr, int* healthptr, int* monstercount) {
	int answer;
	printf("Type 1-80 to select an inventory slot,\ntype another number to go to the forest!\n");
	scanf("%d", &answer);
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
		int secondanswer;
		printf("Select the inventory slot you want to rewrite with this number\n");
		scanf("%d", &secondanswer);

		if ((secondanswer > 0) &&(secondanswer < 81)) {
			inv[secondanswer - 1] = nfromforest;
		} else {
			printf("Invalid inventory slot\n");
		}
		return 0;
	}
}

int clscinv(void* invptr) {
	int answer;
	printf("Type 1-80 to select an inventory slot,\ntype another number to create a number!\n");
	scanf("%d", &answer);
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
		int secondanswer;
		printf("Type the number you want to add to your inventory:\n");
		scanf("%d", &secondanswer);
		int thirdanswer;
		printf("Select the inventory slot you want to rewrite with this number\n");
		scanf("%d", &thirdanswer);

		if ((thirdanswer > 0) &&(thirdanswer < 81)) {
			inv[thirdanswer] = secondanswer;
		} else {
			printf("Invalid inventory slot\n");
		} return 0;
	}
}
