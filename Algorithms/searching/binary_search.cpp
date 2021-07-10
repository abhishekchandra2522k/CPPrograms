#include<bits/stdc++.h>

using namespace std;

int binary_search(int *a, int n, int k){
    int l = 0, r = n-1;
    int mid;
    while(l <= r){
        mid = (l+r)/2;
        if(k == a[mid]){
            return mid;
        }else if(k < a[mid]){
            r = mid - 1;
        }else if(k > a[mid]){
            l = mid + 1;
        }
    }
    return -1;
}

void selection_sort(int* a, int n){
    int i,j, min_ind;
    for(int i = 0; i < n - 1; i++){
        min_ind = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_ind]){
                min_ind = j;
            }
        }
        swap(a[min_ind],a[i]);
    }
}

int main(){
    int a[50], size;
    cout<<"Enter size : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0 ; i < size; i++){
            cin>>a[i];
        }

        selection_sort(a,size);
        int data;
        cout<<"Enter element to find (binary searching) : ";
        cin>>data;
        int res = binary_search(a,size,data);
        if(res != -1){
            cout<<"Position : "<<res+1<<" , Index : "<<res<<endl;
        }else{
            cout<<"Element not found"<<endl;
        }
    }else{
        cout<<"Range error: size out of bound"<<endl;
    }
    return 0;
}

// Time Complexity:
// Best case: element on index mid,
// O(1)

// Average case: O(logN) // when the loop iterates the way, when the array or vector becomes half, then half, like in merge sort, binary search, then only complexity comes out to be O(log)

// Worst case: O(logN)