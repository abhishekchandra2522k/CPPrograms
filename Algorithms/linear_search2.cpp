#include<bits/stdc++.h>

using namespace std;

int linear_search(int* a, int n, int k){
    int result = -1;
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            result = i; 
            break;
        }
    }
    return result;  // returns the index of first occurance of the element, removing break will give last occurance of the element
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
        cout<<"Enter element to search : ";
        cin>>k;
        int res = linear_search(a,size,k);
        if(res != -1){
            cout<<"Position : "<<res+1<<", Index : "<<res<<endl; // Prints position and index of the first occurance of the element
        }else{
            cout<<"Not found"<<endl;
        }
    }else{
        cout<<"Range error : size out of bound";
    }
    return 0;
}

// Time Complexity
// Best Case : O(1)
// Worst Case : O(n)
// Average Case : E (sum of all cases) / number of cases
// i.e. 1 + 2 + 3 + 4 + 5 + ... + n / n = (n(n+1)/2) / n = (n+1)/2
// Average : O(n+1/2)