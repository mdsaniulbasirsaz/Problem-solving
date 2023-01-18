#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int nl=m-l+1;
	int nr=r-m;
	int a[nl],b[nr];
	for(int i=0;i<nl;i++)
	{
		a[i]=arr[l+i];
	}
	for(int j=0;j<nr;j++)
	{
		b[j]=arr[j+1+m];
	}
	int i=0,j=0,k=m;
	while(i<nl&& j<nr)
	{
		if(a[i]<=b[j])
		{
			a[k]=arr[i];
			i++;
		}
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(m-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
void printarraay(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	printarraay(arr,n);
	return 0;
}