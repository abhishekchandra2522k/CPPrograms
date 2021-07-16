#include<iostream>

using namespace std;

int gcd(int, int);
int lcm(int, int);

int gcd(int a, int b){
    while(a && b){
        if(a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a+b;
}

int lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int main(){
    int x,y;
    cout<<"Enter two values to find it's GCD / HCF and LCM :";
    cin>>x>>y;
    cout<<"GCD / HCF: "<<gcd(x, y)<<" LCM: "<<lcm(x,y)<<endl;
    return 0;
}