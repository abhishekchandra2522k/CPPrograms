#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

int jumpingOnClouds(vector<int> c)
{
    int count = 0;
    int sum = 0;
    for (int i : c)
        sum = sum + i;
    for (int i = 0; i < c.size(); i++)
    {
        if (i == c.size() - 1)
        {
            break;
        }
        else if (c[i + 1] == 1)
        {
            i++;
            count++;
        }
        else if (c[i + 1] == 0 && c[i + 2] == 0)
        {
            i++;
            count++;
        }
        else if (c[i + 2] == 1)
        {
            count++;
        }
        else if (i == c.size() - 2)
        {
            count++;
            break;
        }
    }
    if (sum == 0)
    {
        return 1;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split(rtrim(c_temp_temp));

    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int result = jumpingOnClouds(c);

    fout << result << "\n";

    fout.close();

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

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
