// Extern includes
#include<stdio.h>

// Complex extern includes
#ifdef __linux__
	#include<unistd.h>
	#define SLEEP_S(s) \
		sleep(s)
#elif defined(_WIN32)
	#include <windows.h>
	#define SLEEP_S(s) \
		Sleep(s * 1000)
#endif

// Project includes
#include"forest.h"
#include"inv.h"

int main() {
	printf("Welcome to creatival (vPre-Alpha0.03)!\nThe number ascii art maker collecting base numbers via forest exploration!\n");
	printf("Type 1-80 to select an inventory slot,\ntype another number to go to the forest!\n");
	int inv[80] = {0};
	int health = 100;
	int answer;
	int forest = 1;
	int monster = 1;
	while (health > 0) {
		printinv(inv);

		scanf("%d", &answer);
		modifyinv(answer, inv, &forest, &health, &monster);
	} printf("Game over!\n");
}
