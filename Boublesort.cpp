#include<bits/stdc++.h>
using namespace std;

void boublesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter The Array Size=";
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<size;i++)
    {

        cin>>arr[i];
    }
    boublesort(arr,size);
    cout<<"Your Sorted array:"<<endl;
    printarray(arr,size);

    return 0;
}
