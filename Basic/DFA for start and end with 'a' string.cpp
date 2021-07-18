//Deterministic Finite Automata program for accepting strings starting and ending with 'a'
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[100];
    cin>>str;
    int length = strlen(str);
    if(str[0] == 'a' && str[length-1] == 'a')
    {
        cout<<"ACCEPTED";
    }
    else
    {
        cout<<"REJECTED";
    }
return 0;
}
