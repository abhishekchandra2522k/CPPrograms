#include<bits/stdc++.h>

using namespace std;

// This algo only returns Found or Not Found, checkout linear_search2.cpp for index at which the element is found.
bool linear_search(int* a, int n, int k){
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            flag = true;
            break;
        }
    }
    return flag;
}

int main(){
    int a[50], size;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }
        int k;
        cout<<"Enter element to find (this works on linear search algorithm for arrays in c++): ";
        cin>>k;
        if(linear_search(a,size,k)){
            cout<<"Found"<<endl;
        }else{
            cout<<"Not Found"<<endl;
        }
    }else{
        cout<<"Range error: size out of bound"<<endl;
    }
    return 0;
}

// Time Complexity
// Best Case : O(1)
// Worst Case : O(n)
// Average Case : E (sum of all cases) / number of cases
// i.e. 1 + 2 + 3 + 4 + 5 + ... + n / n = (n(n+1)/2) / n = (n+1)/2
// Average : O(n+1/2)