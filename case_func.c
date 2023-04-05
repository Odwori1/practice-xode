#include <stdio.h>
/* below is a function that will manage this code*/
int movePlayer(char direction, int increment, int currentPosition) /*this is an int func
								called movePlayer that takes in char direction
								int increment and int currentPosition as parameters*/
	{
		int newpos = currentPosition + increment;
		
		
		printf("player moved direction:%c new position %d\n", direction, newpos);
		return newpos;
	}

int main()
{
	char input[4] = "xxx";
	int positionIndex = 0;
		
		while (input[0] != 'Q')
		{
			printf("Enter a direction (N S E W): \n");
			fgets(input, 4, stdin);
			switch (input[0]) 
				{
				case 'N':
					/*positionIndex += 1;
					printf("player moved direction:%c new position %d\n", input[0], positionIndex);*/
					positionIndex = movePlayer(input[0], 1, positionIndex);
				break;
				case 'S':
					/*positionIndex -= 1;
					printf("player moved direction:%c new position %d\n", input[0], positionIndex);*/
					positionIndex = movePlayer(input[0], -1, positionIndex);

				break;

				case 'E':
					/*positionIndex += 8;
					printf("player moved direction:%c new position %d\n", input[0], positionIndex);*/
					positionIndex = movePlayer(input[0], 8, positionIndex);

				break;
				
				case 'W':
					/*positionIndex -= 8;
					printf("player moved direction:%c new position %d\n", input[0], positionIndex);*/
					positionIndex = movePlayer(input[0], -8, positionIndex);

				break;

				case 'Q':
				break;
				
				default:
				printf("command unknown: %c\n", input[0]);
				break;
				}
		}
		printf("main program end...\n");
		return 0;	
}
