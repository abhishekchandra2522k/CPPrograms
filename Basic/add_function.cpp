#include<iostream>

using namespace std;

int add(int, int, int = 0,int = 0);

int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<add(a,b);
    int c,d;
    cout<<"Enter four numbers";
    cin>>a>>b>>c>>d;
    cout<<add(a,b,c,d);

return 0;
}


int add(int a, int b, int c, int d)
{
    return(a+b+c+d);
}
