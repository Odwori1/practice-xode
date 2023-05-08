#include <stdio.h>
#include <string.h>
#include <ncurses.h>

int main()
{
	char s1[15];
	char s2[20];
	int value = 0;
	int i;
	
	
		printf("enter first string:\n");
		scanf("%s", s1);
		printf("enter second string:\n");
		scanf("%s", s2);
		printf("the two strings entered are: %s & %s\n", s1, s2);
		
		//value = strcmp(s1, s2);
			for (i = 0; s1[i] !='\0' || s2[i] != '\0'; i++) /*logic to read and compare two strings*/
				{
					if(s1[i] != s2[i])
					{
					value = 1;
					break;
					} 
					
				}	
		if (value == 0)
			printf("the two strings are similar\n");
		else 
			printf("the two strings are not similar\n");
	return (0);
			
		
}
