#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void printout(struct node *head); // Declare the printout function prototype

int main()
{
    struct node *head = NULL; /* declare a variable head which is the first node */
    head = (struct node *)malloc(sizeof(struct node)); /* allocate memory for the head node */

    head->data = 45;
    head->link = NULL;
    printf("%d\n", head->data);

    struct node *newnode = NULL; /* creates a second node */
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = 98;
    newnode->link = NULL;
    head->link = newnode;

    newnode->link = (struct node *)malloc(sizeof(struct node));
    newnode->link->data = 75;
    newnode->link->link = NULL;
    head->link->link = newnode->link;

    printout(head); // Call the printout function to print the linked list

    return 0;
}

void printout(struct node *head)
{
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("This list is empty");
    }
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n"); // Add a newline character to separate the output from the main function
}
