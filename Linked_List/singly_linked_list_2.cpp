#include<bits/stdc++.h>

using namespace std;

struct node{
    double data;
    struct node* next;
};

struct node* head = NULL;

int listLength(struct node *head){
    struct node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertNode(struct node **head, int data, int position){
    int  k = 1;
    struct node *p, *q, *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(!newNode){
        cout<<"Memory Error";
        return;
    }
    newNode->data = data;
    p = *head;
    if(position == 1){
        newNode->next = p;
        *head = newNode;
    }else{
        while(p!=NULL && (k < position)){
            k++;
            q = p;
            p = p->next;
        }
        q->next = newNode;
        newNode->next = p;
    }

}

void viewList(struct node *head){
    struct node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(struct node **head, int position){
    int k = 1;
    struct node *p, *q;
    if(*head == NULL){
        cout<<"List Empty."<<endl;
    }
    p = *head;
    // from the beginning
    if(position == 1){
        *head = (*head)->next;
        free(p);
        return;
    }else{
        // traverse the list until the position from which we want to delete
        while((p != NULL) && (k < position)){
            k++;
            q = p;
            p = p->next;
        }
        if(p == NULL){
            cout<<"Position doesn't exists."<<endl;
        }else{
            q->next = p->next;
            free(p);
        }
    }

}

int menu(){
    int choice;
    cout<<"1. Insert Node in Linked List at position k."<<endl;
    cout<<"2. Delete Node from position k."<<endl;
    cout<<"3. List Length."<<endl;
    cout<<"4. View List."<<endl;
    cout<<"5. Exit."<<endl;
    cout<<"Select Choice : ";
    cin>>choice;
    return choice;
}

int main(){
    while(true){
        int choice = menu();
        if(choice == 1){
            int d,p;
            cout<<"Enter data: ";
            cin>>d;
            cout<<"Enter position: ";
            cin>>p;
            insertNode(&head, d, p);
        }else if(choice == 2){
            int pos;
            cout<<"Enter position : ";
            cin>>pos;
            deleteNode(&head, pos);
        }else if(choice == 3){
            cout<<listLength(head)<<endl;
        }else if(choice == 4){
            viewList(head);
        }else if(choice == 5){
            exit(0);
        }else{
            cout<<"Invalid Choice."<<endl;
        }
    }
    return 0;
}