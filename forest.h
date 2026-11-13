void printforest(int forest[8]) {
	printf("[1: %d][2: %d][3: %d][4: %d]\n[5: %d][6: %d][7: %d][8: %d]\n", forest[0], forest[1], forest[2], forest[3], forest[4], forest[5], forest[6], forest[8]);
}

int goforest(int forest[8]) {
	int pos;
	printforest(forest);
	printf("Type 1-8 to select a cell, type any other number to go back to inventory\n");
	scanf("%d", &pos);
	if (pos > 8 || pos < 1) {
		return 0;
	}
	printf("Extracting number...\n");
	SLEEP_S(forest[pos - 1]);
	return forest[pos - 1];
}

int forest(int* forestnptr) {
	int forestn = *forestnptr;

	if (forestn == 1) {
		int forest[8] = {1, 1, 3, 2, 1, 2, 4, 3};
		forestn = 2;
		return goforest(forest);
	} else if (forestn == 2) {
		int forest[8] = {1, 2, 3, 2, 4, 1, 3, 2};
		forestn = 3;
		return goforest(forest);
	} else if (forestn == 3) {
		int forest[8] = {2, 1, 4, 3, 1, 4, 2, 3};
		forestn = 4;
		return goforest(forest);
	} else if (forestn == 4) {
		int forest[8] = {2, 2, 1, 3, 1, 3, 4, 2};
		forestn = 1;
		return goforest(forest);
	} else {
		int forest[8] = {1, 1, 3, 2, 1, 2, 4, 3};
		forestn = 2;
		return goforest(forest);
	}
}
