// Templating arrayList_without_template.cpp from same folder (Add Generic Programming)

#include<iostream>

using namespace std;

template <class X>
class arrayList{ 
    private:
        struct controlBlock{
            int capacity;
            X *arr_ptr;
        };

        controlBlock *s;
    
    public:
        arrayList(int capacity){
            s = new controlBlock;
            s->capacity = capacity;
            s->arr_ptr = new X[s->capacity]; 
        }

        void addElement(int index, X data){
            if(index >= 0 && index <= s->capacity-1){
                s->arr_ptr[index] = data;
            }else{
                cout<<"Array index out of bounds.";
            }
        }

        void viewElement(int index, X &data){
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
    arrayList <float>list1(4);
    list1.addElement(0,1.09);
    list1.addElement(1,2.2);
    list1.addElement(2,2.0);
    list1.addElement(3,3.6);
    // list1.addElement(3,32); if not assigned, by default 0 is assigned.
    // list1.viewElement(0,data);
    // cout<<data;
    list1.viewList();
    return 0;
}