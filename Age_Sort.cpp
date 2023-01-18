#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 200
long long arr[MAX];

int main(){
   int n,y;
   while(cin>>n)
   {
   for(int i=0;i<100;i++)
   {
    cin>>n;
    arr[y]=arr[y]+1;
   }
    for(int i=0; i<=100; i++)
    {
        if(arr[i]>0)
        {
            for(int j=0;j<arr[i];j++)
            {
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
   }
    
}