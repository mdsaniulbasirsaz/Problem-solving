/* Md Saniul Basir Saz 
   Department Of Computer Science and Engineering 
   Jashore University Of Scinece and Technology 
   Student Id: 200103 
   Email: saniul.cse.just@gmail.com
   Mobile: 01306032236 */
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<bits/stdc++.h>
#include<string>
#define The_End return 0
#define nl '\n'
#define YSSS cout<<"YES"<<nl
#define NOOO cout<<"NO"<<nl
#define ysss cout<<"Yes"<<<nl
#define nooo cout<<"No"<<nl
#define ll long long 
#define fli(i,a,n) for(int i=a;i<n;i++)
#define flj(j,a,n) for(int j=a;j<n;j++)
#define flri(i,a,n) for(int i=n;i>=a;i--)
#define flrj(j,a,n) for(int j=n;j>=a;j--)
#define mod 1000000007
#define st(n) fixed<<setprecision(n)
#define my_code ios_base::sync_with_stdio(0);cout.tie(0);
using namespace std;
const int N=1e5+9;
int arr[N];
void merge(int arr[],int l,int m,int r)
{
	int c=m-l+1;
	int nr=r-m;
	int a[c],b[nr];
	fli(i,0,c)
	{
		a[i]=arr[l+i];
	}
	flj(j,0,nr)
	{
		b[j]=arr[j+1+m];
	}
	int i=0,j=0,k=l;
	while(i<c&&j<nr)
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
	while(i<c)
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
void printsort(int arr[],int n)
{
	fli(i,0,n)
	cout<<arr[i]<<" ";
	cout<<nl;
}
int main()
{
  my_code
  int x,n=0;
  while(cin>>x)
  {
  	arr[n]=x;
  	n++;
  }
  mergesort(arr,0,n-1);
  printsort(arr,n);
  The_End;
}
