#include<iostream>
#include<list>

using namespace std;

int main(){
    list <int> l1{77,22,11,33,55,99,88,44};
    list <string> l2{"Doge","coin","to","the","moon"};

    list <int>::iterator p1=l1.begin();

    while(p1 != l1.end()){
        cout<<*p1<<" ";
        p1++;
    }
    // l1.sort();
    l1.reverse();
    // l1.clear();
    // l1.pop_back();
    // l1.pop_front();
    // l1.push_back();
    // l1.push_front();
    cout<<endl;
    list <int>::iterator p2=l1.begin();

    while(p2 != l1.end()){
        cout<<*p2<<" ";
        p2++;
    }

    // cout<<"Size = "<<l2.size();
    return 0;
}