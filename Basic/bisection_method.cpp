// Function = x^3 - 4*x + 1, Can be changed in definition of bisection function
#include<iostream>

using namespace std;

int bisection(float, float);

int main()
{
 float a,b,c,i;
 cout<<"Enter a and b : "<<endl;
 cin>>a>>b;
 for(i=0;i<=4;i++)
 {
     c=(a+b)/2;
     if(bisection(a,b))
     {
         if((c*c*c-4*c+1)>0)
         {
             b=c;
         }
         else if((c*c*c-4*c+1)<0)
         {
             a=c;
         }
         else
         {
             cout<<c<<"is the solution";
         }
     }
     cout<<i+1<<"."<<c<<endl;
 }
 return 0;
}


int bisection(float m,float n)
{
    float x,y;
    x=m*m*m-4*m+1;
    y=n*n*n-4*n+1;
    if(x*y<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
