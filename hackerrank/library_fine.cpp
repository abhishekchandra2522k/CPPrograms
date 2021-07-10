#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if(d1 > d2 && y1 == y2 && m1 == m2){
        return (d1 - d2) * 15;
    }else if(m1 > m2 && y1 == y2){
        return (m1 - m2) * 500;
    }else if(y1 > y2){
        return 10000;
    }
    
    return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int d1 = stoi(first_multiple_input[0]);

    int m1 = stoi(first_multiple_input[1]);

    int y1 = stoi(first_multiple_input[2]);

    string second_multiple_input_temp;
    getline(cin, second_multiple_input_temp);

    vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

    int d2 = stoi(second_multiple_input[0]);

    int m2 = stoi(second_multiple_input[1]);

    int y2 = stoi(second_multiple_input[2]);

    int result = libraryFine(d1, m1, y1, d2, m2, y2);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
