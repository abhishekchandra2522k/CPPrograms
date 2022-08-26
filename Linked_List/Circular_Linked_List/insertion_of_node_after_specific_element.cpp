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

void insertNodeAtEnd(struct node **head, int data)
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
    return;
}

// code to insert a new node after a specific value node in the list
void insertAfterSpecificNode(struct node **head, int data, int value)
{
    struct node *temp, *newNode;

    // creating a new node
    newNode = createNode();
    newNode->data = data;
    newNode->next = NULL;

    // traversing the list till the value is found
    temp = *head;

    while (temp->data != value)
    {
        temp = temp->next;
    }

    // adding the newNode b/w the "value" data node and next node.
    newNode->next = temp->next;
    temp->next = newNode;
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
    printf("\n");
}

int main()
{

    struct node *head = NULL;

    // inserting different values in the list,
    // 3 will be the first and 18 will be the last node
    insertNodeAtEnd(&head, 3);
    insertNodeAtEnd(&head, 6);
    insertNodeAtEnd(&head, 9);
    insertNodeAtEnd(&head, 12);
    insertNodeAtEnd(&head, 18);
    insertNodeAtEnd(&head, 21);

    // viewing the list
    viewList(&head);

    // inserting the node after node containing 12 data value.
    // parameters (head, newNodedata, valueAfterTheNodeIsInserted)
    insertAfterSpecificNode(&head, 15, 12);

    viewList(&head);

    return 0;
}