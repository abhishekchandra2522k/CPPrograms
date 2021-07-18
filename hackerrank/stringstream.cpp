#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function (Alternate code in comments)
    vector<int> a;
    stringstream ss(str);
    char ch;
    int b; 
    // int count = 0;
    // for(int i = 0; i < str.length(); i++){
    //     if(str[i] == ','){
    //         count++;
    //     }
    // }
    // int j = 0;
    while(!ss.eof()){ // while(j < count)
        ss>>b>>ch;
        a.push_back(b);
        // j++;
    }
    return a;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}