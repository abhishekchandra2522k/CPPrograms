#include<bits/stdc++.h>

using namespace std;

// Defining ListNode LinkedList (User Defined Data Type)
struct ListNode{
    int data;
    struct ListNode *next;
};

// Defining its operations (Abstract Data Type)

// ListLength function takes a head pointer as a parameter to calculate length of a linked list
int ListLength(struct ListNode *head){
    struct ListNode *current = head;
    int count = 0;

    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
};

// Singly Linked List Insertion 
// Insertion can be performed in three ways
void InsertInLinkedList(struct ListNode **head, int data, int position){
    int k = 1;
    struct ListNode *p, *q, *newNode;
    newNode = (ListNode *)malloc(sizeof(struct ListNode));
    if(!newNode){
        cout<<"Memory Error";
        return;
    }
    newNode->data = data;
    p = *head;

    // Inserting at the beginning
    if(position == 1){
        newNode->next = p;
        *head = newNode;
    }else{
        // Traverse the list until the position where we want to insert
        while((p != NULL) && (k < position)){
            k++;
            q = p;
            p = p->next;
        }
        q->next = newNode; //more optimum way to do this
        newNode->next = p;
    }
}


int main(){
    struct ListNode firstLL, **head = NULL;
    InsertInLinkedList(NULL, 25, 1);
    cout<<ListLength(firstLL.next);

    return 0;
}