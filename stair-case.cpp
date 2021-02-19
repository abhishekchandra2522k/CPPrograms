#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int sn = n-1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < sn; j++){
            cout<<" ";
        }
        for(int j = n-1; j >= sn; j--){
            cout<<"#";
        }
        sn--;
        cout<<endl;
    }    
    
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
