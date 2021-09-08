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
        int i = 0, special_character = 0, number = 0, capital_letter = 0;
        while (i < n)
        {
            if (str[i] == ' ' || str[i] == '+')
            {
                return false;
            }

            if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
            {
                number++;
            }

            if (str[i] >= 65 && str[i] <= 90)
            {
                capital_letter++;
            }

            if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
            {
                special_character++;
            }
            i++;
        }

        return capital_letter && number && special_character;
    }
};

int main()
{
    string s;
    cout << "Enter password (1 Capital Letter, 1 Numeric, 1 Special Character, cannot start with numeric, and cannot contain space ' ' and '+') : ";
    getline(cin, s);
    char *str = &s[0];
    int min;
    cout << "Enter minimum length for password : ";
    cin >> min;
    Solution obj;
    if (obj.checkPassword(str, s.size(), min))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid Password" << endl;
    }
    return 0;
}