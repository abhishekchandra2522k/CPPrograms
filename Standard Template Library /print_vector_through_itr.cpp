#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> third_vector {10,20,30,40,50};
    vector<int> :: iterator itr;
    for(itr = third_vector.begin(); itr != third_vector.end(); itr++){
        cout<<*itr<<" ";
    }
    return 0;
}