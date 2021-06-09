#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<vector<int>> arr;
    vector<int> b;
    int n,q,n1,x,c,d;
    cin>>n>>q;
    
    for(int  i = 0; i < n; i++){
        cin>>n1;
        for(int j = 0; j < n1; j++){
            cin>>x;
            b.push_back(x);
        }
        arr.push_back(b);
        b.clear();
    }
    
    for(int i = 0; i < q; i++){
        cin>>c>>d;
        cout<<arr[c][d]<<endl;
    }
    return 0;
}
