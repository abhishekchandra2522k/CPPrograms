#include <stdio.h>
#include <stdlib.h>

// creating a structure for the circular singly linked list
struct node
{
    int data;
    struct node *next;
};

// code for creating a new node
struct node *createNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

void insertNodeAtBeginning(struct node **head, int data)
{
    struct node *temp, *current;

    // creating the new node
    temp = createNode();
    temp->data = data;
    temp->next = NULL;

    // if the list is empty
    if (*head == NULL)
    {
        *head = temp;
        temp->next = *head;
        return;
    }

    // if the list already has more than 1 node
    current = *head;

    while (current->next != *head)
    {
        current = current->next;
    }

    current->next = temp;
    temp->next = *head;
    *head = temp;
    return;
}

// code for displaying the list in the output
void viewList(struct node **head)
{
    struct node *temp;

    // if the list is empty
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    else
    { // if the list has one or more nodes.
        temp = *head;
        printf("List: ");
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != *head);
    }
}

int main()
{

    struct node *head = NULL;

    // inserting different values in the list,
    // 12 will be the first and 2 will be the last node
    insertNodeAtBeginning(&head, 2);
    insertNodeAtBeginning(&head, 4);
    insertNodeAtBeginning(&head, 6);
    insertNodeAtBeginning(&head, 8);
    insertNodeAtBeginning(&head, 10);
    insertNodeAtBeginning(&head, 12);

    // viewing the list
    viewList(&head);

    return 0;
}