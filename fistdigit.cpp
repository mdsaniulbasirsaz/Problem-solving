#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr1[n];
        for( int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        sort(arr1,arr1+n);
        long long c=arr1[1]-arr1[0];
        for( int  i=0;i<n-1;i++)
        {
            int d=arr1[i+1]-arr1[i];
            if(d<=c)
            {
                c=d;
            }

            
        }
       cout<<c<<endl;
        
    }



}