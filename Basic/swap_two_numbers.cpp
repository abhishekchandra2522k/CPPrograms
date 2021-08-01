#include <bits/stdc++.h>

using namespace std;

void swap_func1(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_func2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int choice;
    cout << "1. Swap values using the 3rd Variable without using addresses.\n";
    cout << "2. Swap values using the 3rd Variable using addresses.\n";
    cout << "3. Swap values using the 3rd Variable using references.\n";
    cout << "4. Swap without the 3rd variable (using addition and subtraction).\n";
    cout << "5. Swap without the 3rd variable (using Multiplication and Division) (where, a, b != 0).\n";
    cout << "6. Swap values using XOR operator .\n";
    cout << "7. Swap using inbuilt function .\n";
    cout << "Select a choice : ";
    cin >> choice;

    if (choice == 1)
    {
        int a, b;
        cout << "Enter two variables : ";
        cin >> a >> b;
        int temp = a;
        a = b;
        b = temp;
        cout << "Swapping values using the third variable ....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else if (choice == 2)
    {
        int a, b;
        cout << "Enter two variables : ";
        cin >> a >> b;
        swap_func1(&a, &b);
        cout << "Swapping values using the third variable and passing addresses....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else if (choice == 3)
    {
        int a, b;
        cout << "Enter two variables : ";
        cin >> a >> b;
        swap_func2(a, b);
        cout << "Swapping values using the third variable and references....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else if (choice == 4)
    {
        int a, b;
        cout << "Enter two variables : ";
        cin >> a >> b;
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "Swapping values without the third variable (using +, -) ....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else if (choice == 5)
    {
        int a, b; // will not work if (a = 0 || b = 0)
        cout << "Enter two variables : ";
        cin >> a >> b;
        a = a * b;
        b = a / b;
        a = a / b;
        cout << "Swapping values without the third variable (using *, /) ....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else if (choice == 6)
    {
        int a, b;
        cout << "Enter two variables : ";
        cin >> a >> b;
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
        cout << "Swapping values using XOR ( ^ ) operator ....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else if (choice == 7)
    {
        int a, b;
        cout << "Enter two variables : ";
        cin >> a >> b;
        swap(a, b);
        cout << "Swapping values using inbuilt swap function ....." << endl;
        cout << "Swapped values are a = " << a << " and b = " << b << endl;
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}