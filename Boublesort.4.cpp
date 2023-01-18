#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void boublesort(int arr[],int N)
{
        if(N==1|| N==0)
        {
            return ;
        }
        else
        {
            for(int i=0;i<N-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    swap(arr[i],arr[i+1]);
                }
            }
        }
        boublesort(arr,N-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    boublesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}