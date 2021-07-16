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
};

struct node* push(struct node* head, int d){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = d;
    new_node->next = NULL;

    if(head == NULL)
        return new_node;

    struct node* h = head;

    while(head->next != NULL) head = head->next;

    head->next = new_node;

    return h; 
}

int GetNth(struct node* head, int index);

int main(){
    int T, i, n, l, k;

    cin>>T;

    while(T--){
        struct node *head = NULL;

        cin>>n>>k;

        for(i = 1; i <= n; i++){
            cin>>l;
            head = push(head, l);
        }

        printf("%d\n", GetNth(head, k));
        getchar();
    }
    return 0;
}


int GetNth(struct node* head, int index){
    struct node* temp = head;
    int ans = temp->data;
    int count = 0;
    while(temp != NULL){
        count++;
        if(count == index){
            ans = temp->data;
        }
        temp = temp->next;
    }
    return ans;
}