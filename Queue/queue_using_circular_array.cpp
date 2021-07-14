#include<iostream>

using namespace std;

struct arrayQueue{
    int front, rear;
    int capacity;
    int *array;
};

struct arrayQueue *queue(int size){
    struct arrayQueue *Q = (struct arrayQueue*)malloc(sizeof(arrayQueue));
    if(!Q){
        cout<<"Memory Error."<<endl;
        return NULL;
    }
    Q->capacity = size;
    Q->front = Q->rear = -1;
    Q->array = (int *)malloc(Q->capacity * sizeof(int)); 
    if(!Q->array){
        cout<<"Memory Error."<<endl;
        return NULL;
    }
    return Q;
}

int isEmpty(struct arrayQueue *q){
    return (q->front == -1);
}

int isFull(struct arrayQueue *q){
    return ((q->rear + 1) % q->capacity == q->front);
}

int qsize(struct arrayQueue *q){
    return (q->capacity - q->front + q->rear) % q->capacity;
}

void EnQueue(struct arrayQueue *q, int data){
    if(isFull(q)){
        cout<<"Queue Overflow"<<endl;
    }else{
        q->rear = (q->rear + 1) % q->capacity;
        q->array[q->rear] = data;
        if(q->front == -1){
            q->front = q->rear;
        }
        cout<<data<<" inserted successfully."<<endl;
    }
}

int DeQueue(struct arrayQueue *q){
    int data = 0;
    if(isEmpty(q)){
        cout<<"Queue is Empty"<<endl;
        return 0;
    }else{
        data = q->array[q->front];
        if(q->front == q->rear){
            q->front = q->rear = -1;
        }else{
            q->front = (q->front + 1) % q->capacity; 
        }
    }
    return data;
}

void deleteQueue(struct arrayQueue *q){
    if(q){
        if(q->array){
            free(q->array);
        }
        free(q);
    }
}

void viewQueue(struct arrayQueue *q, int cap){
    for(int i = 0; i < cap; i++){
        cout<<q->array[i]<<" ";
    }
    cout<<endl;
}

int menu(){
    int choice;
    cout<<"1. EnQueue."<<endl;
    cout<<"2. DeQueue."<<endl;
    cout<<"3. View Queue."<<endl;
    cout<<"4. isFull."<<endl;
    cout<<"5. isEmpty"<<endl;
    cout<<"6. Queue Size."<<endl;
    cout<<"7. Exit."<<endl;
    cin>>choice;
    return choice;
}

int main(){
    int cap;
    cout<<"Enter size of queue : ";
    cin>>cap;
    struct arrayQueue *q = queue(cap);
    while(true){
        int choice = menu();
        if(choice == 1){
            int data;
            cout<<"Enter data : ";
            cin>>data;
            EnQueue(q, data);
            
        }else if(choice == 2){
            cout<<DeQueue(q)<<endl;
        }else if(choice == 3){
            viewQueue(q, cap);
        }else if(choice == 4){
            cout<<isFull(q)<<endl;
        }else if(choice == 5){
            cout<<isEmpty(q)<<endl;
        }else if(choice == 6){
            cout<<qsize(q)<<endl;
        }else if(choice == 7){
            exit(0);
        }else{
            cout<<"Invalid Choice."<<endl;
        }
    }
    return 0;
}