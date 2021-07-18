#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a[26];
	char j;
	string sum = "";
	for (j = 'a'; j <= 'z'; j++)
	{
		sum += j;
	}
	cout << sum << " ";
	return 0;
}
