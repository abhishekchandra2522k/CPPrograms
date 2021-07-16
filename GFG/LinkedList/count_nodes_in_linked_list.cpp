#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
}*start;

void insert();
void display();

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        start = NULL;
        insert();
        printf("%d", getCount(start));
        printf("\n");
    }
    return 0;
}

void insert(){
    int n, value, i;

    scanf("%d", &n);
    struct Node *temp;
    for(i = 0; i < n; i++){
        scanf("%d", &value);
        if(i == 0){
            start = (struct Node*)malloc(sizeof(struct Node));
            start->data = value;
            start->next =  NULL;
            temp = start;
            continue;
        }else{
            temp->next = (struct Node*)malloc(sizeof(struct Node));
            temp = temp->next;
            temp->data = value;
            temp->next = NULL;
        }
    }
}

int getCount(struct Node* head){
    int count = 0;
    struct Node *temp;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}