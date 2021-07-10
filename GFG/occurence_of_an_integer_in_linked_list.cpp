#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct node{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;

void insert(){
    int n, i, value;
    struct node *temp;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>value;
        if(i == 0){
            head = new node(value);
            head->next = NULL;
            temp = head;
            continue;
        }
        else{
            temp->next = new node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

// Function to print linked list
void printList(struct node* node){
    while(node != NULL){
        cout<<node->data;
        node = node->next;
    }
    cout<<endl;
}


// SOLUTION
class Solution{
    public:
    int count(struct node* head, int search_for){
        struct node* temp = head;
        int c = 0;
        while(temp != NULL){
            if(temp->data == search_for){
                c++;
            }
            temp = temp->next;
        }
        return c;
    }
};

int main(void){
    int t, k, n, value;
    cin>>t;
    while(t--){
        insert();
        cin>>k;
        Solution ob;
        value = ob.count(head, k);
        cout<<value;
    }
    return 0;
}