#include <iostream>

using namespace std;

class Solution
{
public:
    bool checkPassword(char *str, int n, int min)
    {
        if (min > n)
        {
            return false;
        }
        if ((str[0] - '0' >= 0) && (str[0] - '0' <= 9))
        {
            return false;
        }
        int i = 0, sp = 0, nu = 0, cp = 0;
        while (i < n)
        {
            if (str[i] == ' ' || str[i] == '+')
            {
                return false;
            }

            if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
            {
                nu++;
            }

            if (str[i] >= 65 && str[i] <= 90)
            {
                cp++;
            }

            if (str[i] >= 33 && str[i] <= 47)
            {
                sp++;
            }
            i++;
        }

        return cp && nu && sp;
    }
};

int main()
{
    string s;
    getline(cin, s);
    char *str = &s[0];
    int min;
    cin >> min;
    Solution obj;
    cout << obj.checkPassword(str, s.size(), min);
    return 0;
}