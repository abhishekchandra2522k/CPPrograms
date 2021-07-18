#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int gcd(int a, int b)
{
    while(a&&b){
        if(a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a+b;
}
    
int lcm(int a, int b){
        return (a / gcd(a,b))*b;    
}
    
int getTotalX(vector<int> a, vector<int> b) {
    int max = 100;
    int count=0;
    int j = 1;
    int k = 0;
    for(int i = 0; i < a.size(); ++i){
        j = lcm(j,a[i]);
        if(j > max){
            return 0;
        }
    }
    for(int i = 0; i < b.size(); ++i){
        k = gcd(k,b[i]);
    }
    if(k%j != 0){
        return 0;
    }
    k /= j;
    for(int i = 1; i*i <= k; ++i){
        if(k%i == 0){
            ++count;
            if(i*i != k){
                ++count;
            }
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    string brr_temp_temp;
    getline(cin, brr_temp_temp);

    vector<string> brr_temp = split(rtrim(brr_temp_temp));

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        int brr_item = stoi(brr_temp[i]);

        brr[i] = brr_item;
    }

    int total = getTotalX(arr, brr);

    fout << total << "\n";

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

/* Trying Brute force approach, not correct */
//  int count = 0;
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     int n = a.size();
//     int m = b.size();
//     bool flag = false;
//     for(int i = a.end(); i < b[0]; i++){
//         for(int j = 0; j < n; j++){
//             if(i % a[j] == 0){
//                 flag = true;
//             }
//         }
//     }
//     for(int i = 0; i < m; i++){
//         for(int j = a.end(); j < b[0]; j++){
//             if(b[i] % j == 0 && flag){
//                 count++;
//             }
//         }
//     }
//     return count;