#include <stdio.h>
struct student {
int age;
char name[30];
float marks;
};
int main(void) {
  struct student s = {20, "Jacob", 89.99};
  printf("%lu\n", sizeof(s));
  printf("age of student s is: %d\nname of student is: %s\nscore of student is: %.2f\n", s.age, s.name, s.marks);
/*runtime initialization i.e taking info from user*/
	struct student s1;
	printf("enter student info start with age, name, and marks\n");
	scanf("%d", &s1.age);
	scanf("%s", s1.name);
	scanf("%f", &s1.marks);
   printf("age of student s1 is: %d\nname of student is: %s\nscore of student is: %.2f\n", s1.age, s1.name, s1.marks);
  return 0;
}
