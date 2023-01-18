#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime[500000001];
long long  n=50000000;
vector<int>v;


void sieve()
{
    for(long long i=2;i*i<=n;i++){
        if(prime[i]==false)
        {
            for(long long  j=i*i;j<=n;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(long long i=2;i<=n;i++)
    {
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
}

int main()
{
    sieve() ;
    int  t;
    cin>>t;
    while(t--)
    {
        long long  n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }
}