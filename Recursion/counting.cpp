#include <iostream>

void count(int n)
{
    if (n == 0)
    {
        return;
    }
    std::cout << n << " ";
    count(n - 1);
}

int main()
{
    int n;
    std::cin >> n;
    count(n);
    return 0;
}