#include<iostream>

using namespace std;

class arrayList{
    private:
        struct controlBlock{
            int capacity;
            int *arr_ptr;
        };

        controlBlock *s;
    
    public:
        arrayList(int capacity){
            s = new controlBlock;
            s->capacity = capacity;
            s->arr_ptr = new int[s->capacity]; 
        }

        void addElement(int index, int data){
            if(index >= 0 && index <= s->capacity-1){
                s->arr_ptr[index] = data;
            }else{
                cout<<"Array index out of bounds.";
            }
        }

        void viewElement(int index, int &data){
            if(index >=0 && index <= s->capacity-1){
                data = s->arr_ptr[index];
            }else{
                cout<<"Array index out of bounds";
            }
        }

        void viewList(){
            int i;
            for(i=0; i<s->capacity; i++){
                cout<<s->arr_ptr[i]<<endl;
            }
        }
};

int main(){
    int data;
    arrayList list1(4);
    list1.addElement(0,2);
    list1.addElement(1,12);
    list1.addElement(2,22);
    // list1.addElement(3,32); if not assigned, by default 0 is assigned.
    // list1.viewElement(0,data);
    // cout<<data;
    list1.viewList();
    return 0;
}