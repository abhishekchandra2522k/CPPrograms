/*Function Overloading*/
#define pi 3.14
#include<iostream>

using namespace std;

int area(int,int);

float area(float);

int main()
{
    int i,l,b;
    float r;
    
    cout<<"1. Area of Circle\n2. Area of Rectangle\n";
    cin>>i;
    
    if(i==1){
        cout<<"Enter radius of circle : ";
        cin>>r;
        cout<<"Area of Circle : "<<area(r);
    }else if(i==2){
        cout<<"Enter length : ";
        cin>>l;
        cout<<"Enter breadth : ";
        cin>>b;
        cout<<"Area of rectangle : "<<area(l,b);
    }
    
    return 0;
}


int area(int L,int B)
{
    return(L*B);
}

float area(float R)
{
    return(pi*R*R);
}
