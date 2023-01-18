#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int  lsearch(int arr[],int N,int x)
{
    int i;
    for( i=0;i<N;i++)
        if(arr[i]==x)
             return i;
    return -1;
}
int main()
{
    int n;
    cin>>n;int arr[n];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   int r= lsearch(arr,n,x);
   if(r==-1)
   cout<<"NOt present element"<<endl;
   else
   cout<<r<<endl;

}
