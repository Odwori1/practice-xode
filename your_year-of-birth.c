#include <stdio.h>
/**
 * this program determines the year a user was born
 *
int main()

{
	char y[4] = "Jane";
	int age = 15;
	int year = 2023;
	int x = year - age;
	printf("name %s age%d and year %d\n ", y, age, year);
	printf("born in %d\n", x);
	return 0;

}
*/
int main()
{
	char y[40];
	char t[40];
	int age;
	int year = 2023;
	printf("enter your first name: ");
	scanf("%s", y);
	printf("enter your second name: ");
	scanf("%s", t);
	printf("enter your age: ");
	scanf("%d", &age);
	printf("Hi %s %s\n", y, t);
	printf("%d looks great\n", age);
	printf("%d is a great year\n", year);
	int x = year - age;
	printf("your birth year is %d\n", x);
	
	if(x >= 2000)
	{ 
	printf("You have a bright future ahead of you!\n");
	}

	else
	{
	printf("Care about the children!\n");
	}
	return 0;
}
