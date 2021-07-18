#include<iostream>

using namespace std;

int main()
{
	long long int L,W,H,i,n;

	cin>>L;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>W>>H;
		if(L>W | L>H)
			{
				cout<<"UPLOAD ANOTHER\n";
			}

		else if((L==W & L==H) | W==H)
			{
				cout<<"ACCEPTED\n";
			}
        else
			{
				cout<<"CROP IT\n";
			}
	}
return 0;
}
