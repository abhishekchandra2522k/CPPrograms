#include<iostream>
#include<string.h>
#include<string>
using namespace std;

int main(){
    // some data about character array
    char s1[10] = "Hello";
    char s2[10];
    // s2 = s1; this is a wrong assignment, as '=' doesn't work with character arrays.
    // s1 = "Students"  Error
    // s2 > s1 Error
    // s3 = s1 + s2 Error

    strcpy(s2,"Students");  // Using predefined functions
    int i = strcmp(s2,s1);
    char s3[30];
    strcpy(s3,strcat(s1,s2));

    // STRINGS 
    char str[] = "Coin";
    string str1(str); // via char array pointer (Constructor)
    string str2("Doge"); // via reference (Constructor)
    // cout<<str1<<str2;

    string str3;
    str3 = "To the Moon"; // Constructor not called, '=' assignment operator used

    string str4;
    str4 = str2 + str1 + str3;
    cout<<str4;

    string str5;
    cout<<"Enter your name : ";
    cin>>str5; // space is a delimiter in cin class.
    cout<<str5;

    string str6;
    str6 = s1 + str2; // Mixed Operations (char array) + string class

    // Use of member functions of string class

    string str7;
    str7.assign("Block");
    str7.append("chain");
    str7.insert(10,"A");        // (index, string)
    str7.replace(2,2,"Doge");  // (index, length, string)
    int i = str7.find("Doge");  // returns index in case of found, else returns -1 in case of not found.
    cout<<i;     
    // str7.rfind("Doge");  // returns index from first occurance seen from end of string.
    str7.compare(str6); // compares and return 0 if both strings are same, else if strings are in dict order it returns -1, else 1 (reverse dict order).
    char str[20];
    strcpy(str,str7.c_str());    // c_str converts string into char array
    int j = str7.size(); // returns size / length of string
    str7.erase(); // erase string from variable
    cout<<str7;
}