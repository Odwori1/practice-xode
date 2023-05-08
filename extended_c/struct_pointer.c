#include <stdio.h>

struct student
{
	char name[20];
	int age;
	float height;
};
int main()
{
struct student s;
struct student *ptr = &s;
	printf("Enter student's info here\n\n");
	printf("NAME\n");
	scanf("%s", s.name);
	printf("AGE\n");
	scanf("%d", &s.age);
	printf("HEIGHT\n");
	scanf("%f", &s.height);
	printf("\n\n");
	printf("Student's Bio:\n\n");
	printf("NAME: %s\n", ptr->name);
	printf("AGE: %d\n", ptr->age);
	printf("HEIGHT: %f\n", ptr->height);
return 0;
}

