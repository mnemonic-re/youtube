#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <time.h>

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
