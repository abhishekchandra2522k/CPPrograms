#include<iostream> 

using namespace std;

struct arrayStack{
    int top;
    int capacity;
    int *array;
};

struct arrayStack *createStack(int capacity){
    struct arrayStack *s = (struct arrayStack*)malloc(sizeof(struct arrayStack));
    if(!s){
        cout<<"Memory Error."<<endl;
        return NULL;
    }
    s->capacity = capacity;
    s->top = -1;
    s->array = (int *)malloc(s->capacity * sizeof(int));
    if(!s->array){
        cout<<"Memory Error."<<endl;
        return NULL;
    }
    return s;
}

int isEmpty(struct arrayStack *s){
    return (s->top == -1);
}

int isFull(struct arrayStack *s){
    return (s->top == s->capacity - 1);
}

void viewStack(struct arrayStack *s, int cap){
    for(int i = 0; i < cap; i++){
        cout<<s->array[i]<<" ";
    }
    cout<<endl;
}

void push(struct arrayStack *s, int data){
    if(!isFull(s)){
        s->array[++s->top] = data;
        cout<<"Successfully inserted "<<data<<endl;
    }else{
        cout<<"Stack Overflow."<<endl;
        return;
    }
}

int pop(struct arrayStack *s){
    if(!isEmpty(s)){
        return (s->array[s->top--]);
    }else{
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
}

void deleteStack(struct arrayStack *s){
    if(s){
        if(s->array){
            free(s->array);
        }
        free(s);
    }
}

int menu(){
    int choice;
    cout<<"1. Push data"<<endl;
    cout<<"2. Pop data"<<endl;
    cout<<"3. Stack Overflow?"<<endl;
    cout<<"4. Stack Underflow?"<<endl;
    cout<<"5. Delete Stack."<<endl;
    cout<<"6. View Stack."<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"Select choice : ";
    cin>>choice;
    return choice;
}

int main(){
    int cap;
    cout<<"Enter Stack Capacity: ";
    cin>>cap;
    struct arrayStack *stack = createStack(cap);
    while(true){
        int choice = menu();
        if(choice == 1){
            int data;
            cout<<"Enter data : ";
            cin>>data;
            push(stack, data);
        }else if(choice == 2){
            pop(stack);
        }else if(choice == 3){
            cout<<isFull(stack)<<endl;
        }else if(choice == 4){
            cout<<isEmpty(stack)<<endl;
        }else if(choice == 5){
            deleteStack(stack);
        }else if(choice == 6){
            viewStack(stack, cap);
        }else if(choice == 7){
            exit(0);
        }else{
            cout<<"Invalid choice."<<endl;
        }
    }

    return 0;
}
