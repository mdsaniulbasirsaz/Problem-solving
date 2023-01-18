#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int N=10000000;
int main()
{
    long long n;
    cin>>n;
    int c=0;
    for(int i=1;i<=N;i++)
    {
        if(pow(i,3)==n)
        {
            c=0;
            
        }
    }
    if(c==0)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
}