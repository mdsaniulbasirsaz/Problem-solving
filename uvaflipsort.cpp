#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void flipsort(int arr[],int N,int c)
{
    c=0;
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                c++;
            }
        }
    }
    cout<<"Minimum exchange operations : "<<c<<endl;
}
int main(){
        int arr[100], n,count=0;
        while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        flipsort(arr,n,count);
        }
}