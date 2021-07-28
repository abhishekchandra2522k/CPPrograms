#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void Reverse(char *a, int n)
{
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        S.push(a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = S.top();
        S.pop();
    }
}

int main()
{
    int n;
    cout << "Enter len of string : ";
    cin >> n;
    char a[n];
    cout << "Enter a string : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    Reverse(a, n);
    cout << a;
    return 0;
}