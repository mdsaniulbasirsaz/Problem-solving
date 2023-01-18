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
void printarr(int arr[],int n)
{
    fli(i,0,n-1)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
}
void insertionsort(int arr[],int n)
{
    printarr(arr,n);
    cout<<nl;
    int temp,j;
    fli(i,1,n)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp)
        {
                arr[j+1]=arr[j];
                j--;
        }
        arr[j+1]=temp;
        printarr(arr,n);
        cout<<nl;
    }
}

int main()
{
  my_code
    int size,x;
    cin>>size;
    int arr[size];
    fli(i,0,size)
    {
        cin>>arr[i];
    }
    insertionsort(arr,size);
  The_End;
}
