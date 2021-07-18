#include <bits/stdc++.h>
#include<cmath>
using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
    if(n % 2 == 0){
        n += 1;
    }
    float back = floor((float(n)-float(p))/2);
    float front = ceil((float(p)-1)/2);
    int res = front;
    if(front > back){
        res = back;
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
