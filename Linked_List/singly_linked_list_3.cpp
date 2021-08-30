#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* temp){
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void push(Node** head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertAfter(Node* prev_node, int data){
    if(prev_node == NULL){
        cout<<"Previous node cannot be null"<<endl;
        return;
    }
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

void append(Node** head, int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return;
}

int main(){
    Node* head = NULL;
    // Node* second = NULL;
    // Node* third = NULL;

    // head = new Node();
    // second = new Node();
    // third = new Node();

    // head->data = 1;
    // head->next = second;

    // second->data = 2;
    // second->next = third;

    // third->data = 3;
    // third->next = NULL;

    append(&head, 3);

    push(&head, 2);

    push(&head, 1);

    append(&head, 4);

    insertAfter(head->next, 8);

    printList(head);
    return 0;
}