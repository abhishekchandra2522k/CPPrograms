#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,temp,x,a,b;
    vector<int> v;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        v.push_back(temp);
    }
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    
    return 0;
}
