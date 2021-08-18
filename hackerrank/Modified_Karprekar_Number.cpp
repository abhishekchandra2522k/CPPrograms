#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q)
{
    bool flag = false;
    for (long long i = p; i <= q; i++)
    {
        long long sum = 0;
        long long count = 0;
        long long k = i;
        while (k > 0)
        {
            k /= 10;
            count++;
        }
        long long sqr = i * i;
        long long div = pow(10, count);
        sum = sqr / div + sqr % div;
        if (sum == i)
        {
            cout << i << " ";
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "INVALID RANGE" << endl;
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

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
