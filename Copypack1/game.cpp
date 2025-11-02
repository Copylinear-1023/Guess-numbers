#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Hello World program in C :D
int a = 0;
short check = 5;
int finalanwer;
int level;
int main()
{
	while (true) {
		srand((unsigned)time(NULL));
		printf("Choose the level:\n ");
		printf("[1] Easy(number range 0 - 35)\n");
		printf("[2] Medium (number range 0-50)\n");
		printf("[3] Hard (number range 0-100)\n");
		scanf(" %d", &level);
		if (level == 1)
		{
			finalanwer = rand() % 35;
		}
		else if (level == 2)
		{
			finalanwer = rand() % 50;
		}
		else if (level == 3)
		{
			finalanwer = rand() % 100;
		}
		else
		{
			printf("Invalid level selected. Defaulting to Medium level.\n");
			finalanwer = rand() % 50;
		}
		while (true)
		{
			printf("Guess the number (must be int) : \n");
			//printf("Debug: The answer is %d\n", finalanwer);
			scanf(" %d", &a);
			printf("You entered: %d \n", a);
			if (a == finalanwer)
			{
				printf("Correct! The answer is %d\n", finalanwer);
				break;

			}
			if (a < finalanwer)
			{
				if (level == 1)
				{
					if (finalanwer - a <= 10)
					{
						printf("Incorrect! The number is little small\n");
					}
					else
					{
						printf("Incorrect! The number is too small\n");
					}
				}
				else
				{
					printf("Incorrect! The number is small\n");
				}
				
				a = 0;
			}
			else if (a > finalanwer)
			{
				if (level == 1)
				{
					if (a - finalanwer <= 10)
					{
						printf("Incorrect! The number is little big\n");
					}
					else
					{
						printf("Incorrect! The number is too big\n");
					}
				}
				else
				{
					printf("Incorrect! The number is big\n");
				}
				a = 0;
			}
			if (check < 1)
			{
				printf("No more chances left! The correct answer was %d\n", finalanwer);
				break;
			}
			check = check - 1;
			printf("Check Chance:%d \n", check);
		}
		char reter;
		printf("Need restart?\n");
		printf("[Y]  [N]\n");
		scanf(" %c", &reter);
		if (reter == 'y' || reter == 'Y')
		{
			check = 5;
			a = 0;
			printf("Game restarted.\n");
			continue;
		}
		else if (reter == 'n' || reter == 'N')
		{
			printf("Escape the game now.\n");
			break;
		}
		else
		{
			printf("Invalid input. Exiting the game.\n");
			break;
		}
	}
	
	return 65535;
}


