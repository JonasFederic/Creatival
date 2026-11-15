// Extern includes
#include<stdio.h>
#include<limits.h>

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
#include"monster.h"
#include"forest.h"
#include"inv.h"
#include"game.h"

int main() {
	int gamemode;
	printf("  CCCC  RRRR    EEEEEE  AAAAAA  TTTTTT  IIIIII  VV      VV  AAAAAA  LL    \n");
	printf("CC      RR  RR  EE      AA  AA    TT      II    VV      VV  AA  AA  LL    \n");
	printf("CC      RR  RR  EE      AA  AA    TT      II    VV      VV  AA  AA  LL    \n");
	printf("CC      RRRR    EEEEEE  AAAAAA    TT      II      VV  VV    AAAAAA  LL    \n");
	printf("CC      RR  RR  EE      AA  AA    TT      II      VV  VV    AA  AA  LL    \n");
	printf("  CCCC  RR  RR  EEEEEE  AA  AA    TT    IIIIII      VV      AA  AA  LLLLLL\n\n");

	printf("                         (vPreAlpha-0.0.04)                                \n\n");

	printf("                         [1] Explorer's mode                               \n");
	printf("                         [2] Classic mode                                  \n\n");

	scanf("%d", &gamemode);

	if (gamemode == 1) {
		explorermode();
		return 0;
	} else if (gamemode == 2) {
		classicmode();
		return 0;
	} return 1;
}
