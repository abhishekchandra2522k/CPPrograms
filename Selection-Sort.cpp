#include<iostream>
#include <ctime>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
clock_t c_start = clock();
int i, j, n, min, temp, k;
cout<<"Enter the Number of Elements: ";
cin>>n;
int arr[n];
cout<<"Enter the elements: ";
for(i = 0;i < n;i++)
{
cin>>arr[i];
}
for(i = 0;i < n-1;i++)
{
temp = i;
for(j = i+1;j < n;j++)
{
if(arr[temp] > arr[j])
{
temp = j;
}
}
min = arr[temp];
arr[temp] = arr[i];
arr[i] = min;
}
cout<<"Sorted Array using Selection sort: "<<endl;
for(i = 0;i < n;i++)
{
cout<<arr[i]<<" ";
}
clock_t c_end = clock();
long double time_elapsed_ms = 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC;
cout << "\nCPU time used: " << time_elapsed_ms << " ms\n";
}
