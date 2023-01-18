#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void somadhan(int arr[],int N,int c)

{
    c=0;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                c++;
            }
        }
    }
    cout<<c<<endl;
}

int main(){
    int n,count;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    somadhan(arr,n,count);
}
    