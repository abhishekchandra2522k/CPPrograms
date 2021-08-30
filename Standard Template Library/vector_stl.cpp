#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>v1 {10,20}; // Initialization at the time of declaration
    vector <string> v2{"Doge","Coin"}; // Initial capacity = 2, increased in manner of `2 times` 
    vector <int> v3; // Zero length vector
    vector <char> v4(4,'D'); // 4 blocks of vector type 'char' will be initialized with 'D' character
    vector <int> v5(5); // empty vector of size 5
    vector <string> v6(3,"Doge"); // Each block will have "Doge" string
    
    // cout<<v6[0];
    // cout<<v6[1];  OUTPUT : DogeDogeDoge
    // cout<<v6[2];
                          // CAPACITY
    // cout<<v3.capacity();     0  (Initiallly)
    // v3.push_back(1);         1  
    // cout<<v3.capacity();     
    // v3.push_back(2);         2
    // cout<<v3.capacity();
    // v3.push_back(3);         4
    // cout<<v3.capacity();     OUTPUT : 0124
    cout<<v3.capacity();
    for(int i = 0 ; i <= 9; i++){
        v3.push_back(10*(i+1));
    }
    cout<<v3.capacity();
    v3.pop_back();
    cout<<v3.capacity();
    cout<<v3.size();
    cout<<v3.front();
    cout<<v3.back();

    vector <int>:: iterator it = v3.begin();

    v3.insert(it+3,35);
    for(int i = 0; i < v3.size(); i++){
        cout<<v3[i]<<endl;
    }
    return 0;
}