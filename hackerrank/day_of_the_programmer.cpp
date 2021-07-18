#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {
    string syear = to_string(year);
    string dop=".09." + syear;
    int days = 0;
    if(year % 4 == 0 && year < 1918){
        days = 256 - 244;
        dop = to_string(days) + dop;
    }else if(year % 4 != 0 && year < 1918){
        days = 256 - 243;
        dop = to_string(days) + dop;
    }else if(year > 1918 && (year % 400 != 0 && year % 4 != 0)){
        days = 256 - 243;
        dop = to_string(days) + dop;
    }else if(year > 1918 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))){
        days = 256 - 244;
        dop = to_string(days) + dop;
    }else if(year == 1918){
        days = 256 - 230;
        dop = to_string(days) + dop;
    }else{
        days = 256 - 243;
        dop = to_string(days) + dop;
    }
    return dop;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
