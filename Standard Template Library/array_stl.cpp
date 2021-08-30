#include<iostream>
#include<array>

using namespace std;

int main(){
    array <int, 4>obj = {11,22,33,44};
    array <int, 4>obj2={1,3,4,5};
    int a[4] = {1,2,4,5};

    // swap
    for(int i =0; i<4;i++)
    cout<<obj[i]<<" "<<obj2[i]<<endl;
    obj.swap(obj2);
    for(int i =0; i<4;i++)
    cout<<obj[i]<<" "<<obj2[i]<<endl;

// Member function of array STL
    /*
        - at() : returns the value at a particular index
        - [] operator : returns value at a particular index (same use as for normal arrays)
        - front() : returns first value in the array
        - back() : returns last value in the array
        - fill() : assigns the given value to every element in an array
        - swap() : swaps content of two arrays of same type and same size
        - size() : returns the number of elements in an array
        - begin() : returns the iterator pointing to the first element of the array
        - end() : returns the iterator pointing to an element next to the last element of the array
    */
    // cout<<a[5];  prints garbage value 
    // obj.at(5); Exception , std::out_of_range
    
    return 0;
}