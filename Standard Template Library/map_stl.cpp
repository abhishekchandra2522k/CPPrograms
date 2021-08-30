#include<iostream>
#include<map>

using namespace std;

int main(){
    // Initialising map stl
    map <int, string> customer;

    customer[100] = "Gajendra";
    customer[123] = "Dilip";
    customer[145] = "Aditya";
    customer[171] = "Shahid";
    customer[200] = "Rajesh";

    // OR 
    // at the time of declaration

    map <int, string> customer2{
       {100,"Gajendra"}, {123,"Dilip"}, {145,"Aditya"}, {171, "Shahid"}, {200,"Rajesh"} 
    };

    // customer2.insert(pair<int, string>(122,"Doge"))
    customer2.insert({122, "Doge"});
    // USE of ITERATOR
    map <int, string>:: iterator p = customer2.begin(); // p is the iterator
    while(p != customer2.end()){
        cout<<p->second<<endl; // p->first gives key where p in pointing, 
        p++;
    }

    return 0;
}