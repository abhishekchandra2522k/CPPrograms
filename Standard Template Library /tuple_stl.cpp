#include<iostream>
#include<tuple>

using namespace std;

int main(){
    tuple <string, int, int>t1;
    t1 = make_tuple("Doge",100,700);
    
    // for(int i= 0; i < 3;i++){
    //     cout<<std::get<i>(t1);
    // }       for loop will not work as 'get' only takes const value.
     cout<<std::get<0>(t1);
     cout<<std::get<1>(t1);
     cout<<std::get<2>(t1);
    return 0;
}