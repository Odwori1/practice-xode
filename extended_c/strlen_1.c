#include <stdio.h>
#include <string.h>

int main(void) {
  char name[30];
  char Newname[30];
  int count = 0, count2 = 0, count3 = 0;
  int i = 0;
  int j = 0;
  printf("enter first name\n");
  scanf("%s", name);
  printf("enter sur name\n");
  scanf("%s", Newname);
  printf("your name is: ");
  printf("%s %s\n", name, Newname);
  //count = strlen(name); /*you can call strlen func to count str len*/
while (name[i] != '\0') /*while loop to count str length*/
    {
      count++;
      i++;
    }
	printf("string length for name is: %d\n", count);
	while (Newname[j] != '\0')
	{
	count2++;
	j++;
	}
	printf("string length for sur name is: %d\n", count2);
	count3 = count + count2;
  printf("string length is %d\n", count3);
  strcat(Newname, name);/*this function concatenates strings*/
  printf("%s\n", Newname);
  return 0;
}
