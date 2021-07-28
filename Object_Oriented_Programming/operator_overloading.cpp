#include <iostream>

using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res(0, 0);
        res.real = real + obj.real;
        res.img = img + obj.img;
        return res;
    }

    void print()
    {
        cout << real << " "
             << " + i" << img << endl;
    }
};

int main()
{
    Complex a(1, 2), b(3, 4);
    Complex c = a + b;
    c.print();
    return 0;
}