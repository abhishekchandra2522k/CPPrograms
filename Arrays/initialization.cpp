#include<iostream>

using namespace std;

int main(){
    // Compile time Initialization of arrays
    int a[5] = {3,1,7,1,7};  // 20(4Bytes(size of int) * 5(size of array)) Bytes of Memory Allocated, (32 bits each)
    char b[10] = {'d','o','g','e'};
    float c[4] = {1.2,2.3,36.717,37.550};

    //Run time initialization
    int d[10];
    for(int i = 0; i<2; ++i){
        cin>>d[i]; // Input numbers in the terminal on run time
    }

    // Run time declaration
    int n;
    cin>>n;
    int e[n];

    cout<<sizeof(e);
    return 0;
}