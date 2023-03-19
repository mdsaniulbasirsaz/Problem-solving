#include<iostream>
using namespace std;
int MAX(int arr[],int low,int high)
{
    int midvalue,left,right;
        if(low==high)
        {
            return arr[low];
        }
        midvalue=(low+high)/2;
        left=MAX(arr,low,midvalue);
        right=MAX(arr,midvalue+1,high);
        return max(left,right);
}
int MIN(int arr[],int low,int high)
{
    int midvalue,left,right;
    if(low==high)
    {
        return arr[low];
    }
    midvalue=(low+high)/2;
    left=MIN(arr,low,midvalue);
    right=MAX(arr,midvalue+1,high);
    return min(left,right);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxelement=MAX(arr,0,n-1);
    cout<<"Max Element = "<<maxelement<<endl;
    int minelement=MIN(arr,0,n-1);
    cout<<"Min Element = "<<minelement<<endl;
    return 0;
}