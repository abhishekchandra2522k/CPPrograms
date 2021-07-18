#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    if(s[8] == 'A'){
       if(s[0] == '1' && s[1] == '2'){
           s.replace(0,2,"00");   
       }
    }
    
    if(s[8] == 'P'){
        string str = s;
        str.replace(2,8,"");
        int istr = stoi(str);
        if(istr != 12){
            istr += 12;
            s.replace(0,2,to_string(istr));
        }
    }
    
    s.replace(8,2,"");
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
