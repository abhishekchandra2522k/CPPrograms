#include <iostream>

using namespace std;

string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);
        else
            result += char(int(text[i] + s - 97) % 26 + 97);
    }

    return result;
}

string decrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i] - s - 65) % 26 + 65);
        else
            result += char(int(text[i] - s - 97) % 26 + 97);
    }

    return result;
}

int main()
{
    string text = "SCALER";
    int s = 5;
    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nEncrypt : " << encrypt(text, s);
    cout << "\nDecrypt : " << decrypt(encrypt(text, s), s);
    return 0;
}