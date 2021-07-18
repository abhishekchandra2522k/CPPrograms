#include<iostream>

using namespace std;

class Complex{
int a,b;

public:
    void set_data(int ,int );
    void show_data()
    {
        cout<<a<<" "<<b;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return(temp);
    }
};

    void Complex:: set_data(int x,int y)
    {
        a=x;
        b=y;
    }

int main()
{
    Complex C1,C2,C3;
    C1.set_data(3,4);
    C2.set_data(5,6);
    C3=C1.add(C2);
    C3.show_data();
    return 0;
}
