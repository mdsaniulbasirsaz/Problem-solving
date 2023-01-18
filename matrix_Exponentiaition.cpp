#include<iostream>
#include<cmath>
using namespace std;
#define N 101 
long long arr[N][N],I[N][N];
long long mod=10000000007;
void mul(long long A[][N],long long B[][N],long long n)
{
    long long r[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            r[i][j]==0;
            for(int k=1;k<=n;k++)
            {
                long long x=(A[i][k]*B[k][j]);
                r[i][j]=x+r[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            A[i][j]=r[i][j];
        }
    }
}
void power(long long A[][N],long long n,long long p)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)I[i][j]=1;
            else
            I[i][j]=0;
        }
    }
    while(p)
    {
        if(p%2==1)
        {
            mul(I,A,n);
            p--;
        }
        else
        {
            mul(A,A,n);
            p/=2;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p;
        cin>>n>>p;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++){
                cin>>arr[i][j];
            }
        }
        power(arr,n,p);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}