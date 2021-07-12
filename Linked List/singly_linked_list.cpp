#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    struct node *next;
}*head;

int ListLength(){
    struct node *current = head;
    int count = 0;

    while(current != NULL){
        count++;
        current = current->next;
    }
    return count;
};

struct node* createNode(){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    return n;
}

void insertNode(){
    struct node* temp, *t;
    temp = createNode();
    cout<<"Enter data";
    cin>>temp->data;
    temp->next = NULL;    
    if(head == NULL){
        head = temp;
    }else{
        t = head;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = temp;
    }
}

void deleteNode(){
    struct node *r;
    if(head == NULL){
        cout<<"List is empty.";
    }else{
        r = head;
        head = head->next;
        free(r);
    }

}

void viewList(){
    struct node *t;
    if(head == NULL){
        cout<<"List is empty.";
    }else{
        t = head;
        while(t != NULL){
            cout<<t->data<<" ";
            t = t->next;
        }
    }
}

int menu(){
    int choice;
    cout<<"1. Add value to the list\n";
    cout<<"2. Delete first node\n";
    cout<<"3. View List\n";
    cout<<"4. Exit\n";
    cout<<"Enter a choice";
    cin>>choice;
    return choice;
}

int main(){
    while(true){
        switch (menu())
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        
        case 4:
            exit(0);
        default:
            cout<<"Invalid choice";
        }
    }
    return 0;
}