#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertNode(struct node **head, int data, int position){
    int k = 1;
    struct node *temp, *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    if(!newNode){
        cout<<"Memory Error";
        return;
    }
    newNode->data = data;
    if(position == 1){
        newNode->next = *head;
        newNode->prev = NULL;

        if(*head){
            (*head)->prev = newNode;
        }

        *head = newNode;
        return;
    }

    temp = *head;

    while((k < position - 1) && (temp->next != NULL)){
        temp = temp->next;
        k++;
    }
    if(k != position){
        cout<<"Desired position does't exist."<<endl;
    }
    newNode->next = temp->next;
    newNode->prev = temp;

    if(temp->next){
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    return;
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
    struct node *temp, *temp2; 
    temp = *head;
    int k = 1;
    if(*head == NULL){
        cout<<"List is empty."<<endl;
        return;
    }
    if(position == 1){
        *head = (*head)->next;
    }
    if(*head != NULL){
        (*head)->prev = NULL;
        free(temp);
        return;
    }
    while((k < position) && (temp->next != NULL)){
        temp = temp->next;
        k++;
    }
    if(k != position - 1){
        cout<<"Desired position does not exists."<<endl;
    }
    temp2 = temp->prev;
    temp2->next = temp->next;

    if(temp->next){
        temp->next->prev = temp2;
    }
    free(temp);
    return;
}

int listLength(struct node *head){
    struct node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
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