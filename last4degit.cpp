#include<iostream>
using namespace std; 
int main()
{
    long long n;
    cin>>n;
    long long fact=1,s=0;
    for(long long i=1;i<=n;i++)
    {
        fact*=i;
    }
        cout<<fact%10000<<endl;
    return 0;
}