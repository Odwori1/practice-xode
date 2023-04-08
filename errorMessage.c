#include <stdio.h>

void printError(char message[], int amount);

int main()
{
 printError("Unknown Error", 5);
 return 0;
}
void printError(char message[], int amount)

{	
	for (int i = 0; i < amount; i++)
	printf("Error: %s\n", message);

}
