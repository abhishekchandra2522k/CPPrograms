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
}