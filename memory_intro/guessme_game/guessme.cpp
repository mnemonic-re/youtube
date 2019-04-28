#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <time.h>

/*
Compile Options to reduce the size of binary and remove security measures for practice

- C\C++ -> Optimization -> Optimization = DISABLED
- C\C++ -> Code Generation -> Security Check = Disable Security Check (/GS-)
- Linker -> Advanced
Randomized Base Address = No (/DYNAMICBASE:NO)
Data Execution Prevention (DEP) = No (/NXCOMPAT:NO)
*/

int main()
{
	__asm nop;
	printf("Guess a number between 1 and 1000\n");
	__asm nop;
	printf("HINT: don't guess :)\n");
	__asm nop;


	srand(time(NULL));
	int random = rand() % 1000 + 1;
	int guess;


	while (true)
	{
		scanf("%d", &guess);
		if (guess == random)
		{
			printf("CORRECT! Number was: %d", guess);
			break;
		}
	}
	return 0;
}
