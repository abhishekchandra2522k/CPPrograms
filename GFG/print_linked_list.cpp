#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

struct Node{
    int data;
    struct Node *next;
}*start;

void insert();

class Solution{
    public:
    void display(Node *head){
        struct Node *temp;
        temp = head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        start = NULL;
        insert();
        Solution ob;
        ob.display(start);
        cout<<endl;
    }
    return 0;
}

void insert(){
    int n, value;
    cin>>n;
    struct Node *temp;
    for(int i = 0; i < n; i++){
        cin>>value;
        if(i == 0){
            start = (struct Node *) malloc( sizeof(struct Node));
            start->data = value;
            start->next = NULL;
            temp=start;
            continue;
        }
        else{
            temp->next = (struct Node * ) malloc( sizeof(struct Node));
            temp = temp->next;
            temp->data = value;
            temp->next = NULL;
        }
    }
}