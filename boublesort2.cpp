#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void boublesort(int arr[],int N){
    for(int i=0;i<N-1;i++)
    {
        for(int j=0;j<N-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void prisort(int arr[],int N)
{
    for(int i=0;i<N;i++) {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    boublesort(arr,n);
    cout<<"Bouble Sort"<<endl;
    prisort(arr,n);
    return 0;

}