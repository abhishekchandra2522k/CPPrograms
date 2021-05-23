#include<iostream>

using namespace std;

int miN(int a[], int n){
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(min > a[i]){
            min = a[i];
        }
    }
    return min;
}

int maX(int a[], int n){
    int max = a[0];
    for(int i = 0; i < n; ++i){
        if(max < a[i]){
            max = a[i];
        }
    }

    return max;
}

int main(){
    int a[50],size;
    cout<<"Enter size of the array : ";
    cin>>size;
    if(size <= 50 && size >= 0){
        cout<<"Enter elements : ";
        for(int i = 0; i < size; i++){
            cin>>a[i];
        }

        cout<<"Min : "<<miN(a, size)<<"\nMax : "<<maX(a,size)<<endl;
    }else{
        cout<<"Index Error : Size out of bound";
    }

    
    return 0;
}