int monsteratack(int* healthptr, int* monsterhealth, int base) {
	int answer;
	scanf("%d", &answer);

	if (answer == 1) {
		*monsterhealth -= 3;

		if ((*monsterhealth <= 0) || (*healthptr <= 0)) {
			return 0;
		}

		*healthptr -= 2;
		printf("Your health: %d, Monster's health: %d\n", *healthptr, *monsterhealth);
	} else if (answer == 2) {
		*monsterhealth -= 1;

		if ((*monsterhealth <= 0) || (*healthptr <= 0)) {
			return 0;
		}

		*healthptr -= 1;
		printf("Your health: %d, Monster's health: %d\n", *healthptr, *monsterhealth);
	} else {
		return 1;
		printf("You ran from the forest\nYour health: %d, Monster's health: %d\n", *healthptr, *monsterhealth);
	} return 0;
}

int monsterload(int base, int *healthptr) {
	int monsterhealth = 3 * base;
	printf("A monster is blocking your %d!\n", base);
	printf("Type 1 to do an agressive atack to the monster, type 2 to make an defensive atack against the monster, type any other number to run from the forest\n");
	printf("Your health: %d, Monster's health: %d\n", *healthptr, monsterhealth);

	while (monsterhealth > 0 && *healthptr > 0) {
		int res = monsteratack(healthptr, &monsterhealth, base);
		if (res == 1) return 1;
	} return 0;
}
