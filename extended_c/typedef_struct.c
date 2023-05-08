#include <stdio.h>

typedef struct student /*typedef redefines struct to a new name*/
{	char name[5];
	int age;
	float average;
} st;/*this struct has been renamed to 'st' using typedef*/
int main()
{	
	/* 'st' is used to call and initialize struct student*/
	st s = {"John", 22, 5.6};
	printf("%s\n%d\n%f\n", s.name, s.age, s.average);
}
