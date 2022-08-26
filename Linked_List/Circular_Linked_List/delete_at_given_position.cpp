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

// code to delete a node at a specific position from the list
void deleteAtPosition(struct node **head, int pos)
{
    if (pos > 6 || pos < 1)
    {
        printf("Invalid position to delete a node.\n");
        return;
    }
    int i = 1;
    struct node *temp, *position;
    temp = *head;

    if (*head == NULL)
    { // if list is empty
        printf("\nList is empty.\n");
    }
    else
    {
        printf("Deleted the node at position: %d\n", pos);
        // if the first node is to be deleted
        if (pos == 1)
        {
            position = *head;

            while (temp->next != *head)
            {
                temp = temp->next;
            }

            temp->next = (*head)->next;
            *head = (*head)->next;
            free(position);
            return;
        }
        // traversing the list till the previous node position is reached
        while (i <= pos - 2)
        {
            temp = temp->next;
            i++;
        }

        // temp is now pointing to the previous node to the node to be deleted

        // reassigning links
        position = temp->next;
        temp->next = position->next;

        free(position);
        return;
    }
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
    // 1 will be the first and 6 will be the last node
    insertNodeAtEnd(&head, 1);
    insertNodeAtEnd(&head, 2);
    insertNodeAtEnd(&head, 3);
    insertNodeAtEnd(&head, 4);
    insertNodeAtEnd(&head, 5);
    insertNodeAtEnd(&head, 6);

    // viewing the list
    viewList(&head);

    // deleting the third position node i.e. 3
    deleteAtPosition(&head, 3);

    viewList(&head);

    return 0;
}