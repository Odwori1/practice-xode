#include<stdio.h>

struct students {
	char firstName[25];
	char surName[25];
	int age;
	float marks;
	};
int main()
{
struct students s[3];
	int i;
	for (i = 0; i < 3; i++)
	{
	printf("enter info of student %d\n", i +1);
	printf("First Name\n");
	scanf("%s", s[i].firstName);
	printf("Sur Name\n");
	scanf("%s",s[i].surName);
	printf("Age\n");
	scanf("%d", &s[i].age);
	printf("score\n");
	scanf("%f", &s[i].marks);
	}
	printf("\nDetails of all students\n");
	for (i = 0; i < 3; i ++)
	{
	printf("student %d\n", i + 1);
	printf("First Name: %s\n", s[i].firstName);
	printf("Sur Name: %s\n", s[i].surName);
	printf("AGE: %d\n", s[i].age);
	printf("SCORE: %f\n", s[i].marks);
	}
return 0;
}


