#include <stdio.h>
#include <string.h>

int main()

{
	char s1[32];
	int i;
	
	printf("enter string\n");
	scanf("%s", s1);
	printf("the string you entered is %s\n", s1);
	/*for (i = 0; s1[i] != '\0'; i++)
		{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
			{
			s1[i] += 32;
			}
		}
		printf("when case swap is made string becomes %s\n", s1);*/

		for (i = 0; s1[i] != '\0'; i++)
                  {
                  if (s1[i] >= 'a' && s1[i] <= 'z')
                          {
                          s1[i] -= 32;
                          }
                  }
                  printf("when case swap is made string becomes %s\n", s1);
	return 0;
}
