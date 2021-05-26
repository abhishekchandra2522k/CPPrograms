#include<bits/stdc++.h>

using namespace std;

float mIn(int* a, int n){
    return *min_element(a, a+n);
}

float mAx(int* a, int n){
    return *max_element(a, a+n);
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

        float min = mIn(a, size);
        float max = mAx(a, size);
        float coe = (max-min)/(max+min);
        cout<<"Range : "<<max-min<<endl;
        cout<<"Coefficient : "<<((max-min)/(max+min))<<endl;
    }else{
        cout<<"Range error: Size out of bound";
    }

    return 0;
}