#include <bits/stdc++.h>

using namespace std;

char *reverse(char *str, int len);

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        cout << ch;
        cout << endl;
    }
    return 0;
}

char *reverse(char *S, int len)
{
    stack<char> st;
    for (int i = 0; i < len; i++)
    {
        st.push(S[i]);
    }
    for (int i = 0; i < len; i++)
    {
        S[i] = st.top();
        st.pop();
    }
    return S;
}