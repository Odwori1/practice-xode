#include <stdio.h>
#include <stdlib.h>

struct node
{
int data;
struct node *link;
};
void printout(struct node *head);
int main()
{	
	struct node *head = NULL;/* declare a variable head which is the first node*/
	head = (struct node *)malloc(sizeof(struct node));/*allocate memory for the head node*/
	
	head->data = 45;
	head ->link = NULL;
	printf("%d\n", head->data);
	
	struct node *newnode = NULL;/*creates a second node*/
	newnode = (struct node *)malloc(sizeof(struct node));
	newnode->data = 98;
	newnode->link = NULL;
	head->link = newnode;
//method 1
/*	struct node *newnode2 = NULL;
	newnode2 = (struct node*)malloc(sizeof(struct node));
	newnode2 ->data = 75;
	newnode2 ->link = NULL;
	newnode->link = newnode2;*/
//method2
	newnode->link = (struct node *)malloc(sizeof(struct node));
	newnode->link->data = 75;
	newnode->link->link = NULL;
	head->link->link = newnode->link;
	printout(head);
	/*struct node *current = head;
	while (newnode != NULL)
	{
	printf("%d", head->data);
	newnode = newnode->link;
	}*/
	//printf("%d,%d\n", head->data, newnode->data);
	return 0;
}
void printout(struct node *head)
{
struct node *ptr = NULL;
ptr = head;
if (ptr == NULL)
{
printf("this list is empty");
}
while (ptr != NULL)
{
printf("%d ", ptr->data);
ptr = ptr->link;
}
printf("\n");
}
