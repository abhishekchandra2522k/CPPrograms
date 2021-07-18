#include<iostream>

using namespace std;

class node{
    private:
        int data;
        node *next;
    public:
        node *head;
        int listLength(node *head){
            node* temp = head;
            int count = 0;
            while(temp != NULL){
                count++;
                temp = temp->next;
            }
            return count;
        }
        void createNode(node **head, int data, int position){
            int k = 1;
            node *p,*q, *newNode;
            newNode = (node*)malloc(sizeof(node));

        }
};

int menu(){
    int choice;
    cout<<"1. Create Node."<<endl;
    cout<<"2. Delete Node."<<endl;
    cout<<"3. List Length."<<endl;
    cout<<"4. View List."<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Select Choice : ";
    cin>>choice;
    return choice;
}

int main(){
    node firstLL;
    firstLL.head = NULL;
    while(true){
        int choice = menu();
        if(choice == 1){
            int data, pos;
            cout<<"Enter data : ";
            cin>>data;
            cout<<"Enter Position : ";
            cin>>pos;
            firstLL.createNode(&head, data, pos);
        }else if(choice == 2){
            int pos;
            cout<<"Enter position : ";
            cin>>pos;
            deleteNode(&head, pos);
        }else if(choice == 3){
            cout<<firstLL.listLength(firstLL.head);
        }

    }
    return 0;
}