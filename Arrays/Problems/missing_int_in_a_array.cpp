#include<bits/stdc++.h>

using namespace std;

int missing_number(vector<int>& a, int n){
    int sum = (n * (n+1))/2;
    int asum = accumulate(a.begin(), a.end(), 0);
    return sum - asum;
}

int main(){
    vector<int> a;
    int size, n;
    cin>>size;
    cin>>n;
    int x = 0;
    for(int i = 0; i < size; i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<missing_number(a, n);
    return 0;
}