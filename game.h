void explorermode() {
	int inv[80] = {0};
	int health = 100;
	int forest = 1;
	int monster = 1;
	while (health > 0) {
		printinv(inv);

		eplrinv(inv, &forest, &health, &monster);
	} printf("Game over!\n");
}

void classicmode() {
	int inv[80] = {0};
	while (1) {
		printinv(inv);

		clscinv(inv);
	}
}
