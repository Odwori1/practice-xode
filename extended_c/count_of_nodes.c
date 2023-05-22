#include <stdio.h>
#include <stdlib.h>

void count_of_nodes(struct node *head)
{
	int count = 0;
	if (head == NULL)
	{
	printf("this list is empty\n");
	}
	struct node *ptr = NULL;
	ptr = head;
	while(ptr != NULL)
	{
	count++;
	ptr = ptr->link;
	}
	printf(count);
	return 0;
}

