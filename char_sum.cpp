#include<iostream>

using namespace std;

int main()
{
	char a[26],s[100];
	char i;
	int j;
	for(j=0;j<=26;j++)
	{
		for(i='a';i<='z';i++)
			{
				a[j]=i;
				i++;
				break;
			}
		cout<<a[j]<<" ";
	}

}
