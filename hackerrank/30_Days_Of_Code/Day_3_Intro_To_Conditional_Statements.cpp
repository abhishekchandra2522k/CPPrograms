#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    if (N % 2 != 0)
    {
        cout << "Weird" << endl;
    }
    else if ((N % 2 == 0) && (N >= 2) && (N <= 5))
    {
        cout << "Not Weird" << endl;
    }
    else if ((N % 2 == 0) && (N >= 6) && (N <= 20))
    {
        cout << "Weird" << endl;
    }
    else if ((N % 2 == 0) && (N > 20))
    {
        cout << "Not Weird" << endl;
    }
    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
