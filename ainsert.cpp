#include<iostream>
using namespace std;
void somadhan(int arr[],int n)
{
	int value,pos;
	cin>>value>>pos;
	n++;
	for(int i=n-1;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=value;
}
void prinsom(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	somadhan(arr,size);
	prinsom(arr,size+1);
}