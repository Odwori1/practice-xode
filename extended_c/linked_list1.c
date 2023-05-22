#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void printLinkedList(struct node* head)
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    struct node* head = NULL;
    struct node* newNode = NULL;
    struct node* temp = NULL;
    int choice;

    while (choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        if (newNode == NULL) // Check if memory allocation was successful
        {
            printf("Memory allocation failed. Exiting...");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &(newNode->data));

        newNode->next = NULL;

        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Do you want to continue?\nChoose 0 to decline or 1 to accept: ");
        scanf("%d", &choice);
    }

    temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("Linked List: ");
    printLinkedList(head);

    return 0;
}
