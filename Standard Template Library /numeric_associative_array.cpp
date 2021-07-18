#include<iostream>
#include<map>

using namespace std;

class student{
    int roll_no;
    string name;

    public:
        void add_student(int r, string n){
            roll_no = r;
            name = n;
        }

        void view_student(){
            cout<<roll_no<<endl;
            cout<<name;
        }
};

int main(){
    // Numeric Array
    int roll_no[10];
    float doge[10];                   // All these are numeric array
    student students[10];

    // associative array  - maps (key-value pair)
    map <int, string> crypto;

    crypto[6] = "Doge";
    crypto[0] = "USTD";
    crypto[3] = "BTC";
    return 0;
}