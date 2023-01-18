#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
	int i,j,k,nl,nr;
	nl=m-l+1;nr=r-m;
	int larr[nl],rarr[nr];
	for(i=0;i<nl;i++)
	{
		larr[i]=arr[l+i];
	}
	for(j=0;j<nr;j++)
	{
		rarr[j]=arr[m+1+j];
	}
	i=0,j=0,k=1;
	while(i<n&&j<nr)
	{
		if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }
      else{
         array[k] = rarr[j];
         j++;
      }
      k++;
	}
	while(i<nl)
	{
		arr[k]=larr[i];
		i++;
		k++;
	}
	while(j<nr)
	{
		arr[k]=rarr[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int l,int m)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	int n=3;
	int arr[10000];
	for(int i=0;i<3;i++)
	{
		cin>>arr[i];
	}
	mergesort(arr,0,n-1);
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}