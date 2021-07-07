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


int main(){
    struct ListNode firstLL;
    cout<<ListLength(firstLL.next);
    return 0;
}