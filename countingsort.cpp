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
void  countingsort(int arr[],int n)
{
	int output[n];int count[n];int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(int i=0;i<=max;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	for(int i=1;i<=max;i++)
	{
		count[i]+=count[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		output[count[arr[i]]-1]=arr[i];
		count[arr[i]]--;
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=output[i];
	}

}
void printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
  my_code
  int size;
 	while(cin>>size)
 	{
 		int arr[size];
 		fli(i,0,size)
 		{
 			cin>>arr[i];
 		}
 		countingsort(arr,size);
 		printarr(arr,size);
 	}
  The_End;
}
