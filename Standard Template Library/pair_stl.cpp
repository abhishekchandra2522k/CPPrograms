#include<iostream>

using namespace std;

class student{
    private:
        string name;
        int age;
    public:
        void setStudent(int a, string n){
            name = n;
            age = a;
        }

        void viewStudent(){
            cout<<name<<endl;
            cout<<age;
        }
};

int main(){
    pair <string, int>p1;
    pair <string, string>p2;
    pair <string, float>p3;
    pair <int, student>p4;
    
    p1 = make_pair("Coin", 70);
    p2 = make_pair("India", "Delhi");
    p3 = make_pair("Doge", 5.99f);
        student s1;
        s1.setStudent(20, "AC");
    p4 = make_pair(413,s1);

    cout<<p1.first<<p1.second<<endl;
    cout<<p3.first;
    student s2 = p4.second;
    s2.viewStudent();
    return 0;
}