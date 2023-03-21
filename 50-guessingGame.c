/**
 * user has to guess a random number
 * program outputs whether or not the user is correct
 */
#include "main.h"

void theGuessing_game()
{
	//program is instructed to generate a random number
	//program generates a pseudo random number(not entirely random)
	//provide code to pseudo random generate(to generate pseudo random number)
	//random number gets seeded
	//outputs result
	// seed is generated from the clock
	
	unsigned int input;
	int tries = 0;
	int difficulty;
	int maxValue;
	int maxTries;

	while(1)//loops infinitely until the user inputs 1,2, or 3(correct difficulty)
	{
	printf("Select difficulty level: \n");
	printf("1:Easy\n2:Intermediate\n3:Hard\n");
	scanf("%d", &difficulty);


	if(difficulty == 1)
	{
	maxValue = 5;
	maxTries = 4;
	break;
	}
	else if(difficulty == 2)
	{
	maxValue = 10;
	maxTries = 3;
	break;
	}
	else if(difficulty == 3)
	{
	maxValue = 100;
	maxTries = 2;
	break;
	}
	if(difficulty != 1 || 2 || 3)
	printf("\nchoose a number from 1 to 3\n\n");
	}
	srand(time(NULL)); //seeds random number from clock
	unsigned int randomNumber = rand() % maxValue; //rand function is called to get actual value of random number
					//modulus operator gives keeps us within our desired range
	//printf("%d\n", randomNumber);
	while(tries < maxTries)
	{
	printf("Guess a number less than %d: ", maxValue);
	

	scanf("%d", &input);
	if(input == randomNumber)
	{
	printf("congratulations you won\n");
	break;
	}
	else
	{
	printf("Try again\n");
	tries++;
	}
	
	}
	return;
}
