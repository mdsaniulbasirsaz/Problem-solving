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
	int i=0,j=0,k=l;
	while(i<nl&&j<nr)
	{
		if(a[i]<=b[j])
		{
			arr[k]=a[i];
			i++;
		}
		else
		{
			arr[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		arr[k]=a[i];
		i++;
		k++;
	}
	while(j<nr)
	{
		arr[k]=b[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);

	}
}
 void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	
	int n;
	cout<<"Input: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	cout<<"output:"<<endl;
	printarray(arr,n);
	return 0;
}
