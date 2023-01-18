#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<bits/stdc++.h>
#include<string>
#define The_End return 0
#define nl '\n'
#define YSSS cout<<"YES"<<nl
#define NOOO cout<<"NO"<<nl
#define ysss cout<<"Yes"<<<nl
#define nooo cout<<"No"<<nl
#define ll long long 
#define fli(i,a,n) for(int i=a;i<n;i++)
#define flj(j,a,n) for(int j=a;j<n;j++)
#define flri(i,a,n) for(int i=n;i>=a;i--)
#define flrj(j,a,n) for(int j=n;j>=a;j--)
#define mod 1000000007
#define st(n) fixed<<setprecision(n)
#define my_code ios_base::sync_with_stdio(0);cout.tie(0);
using namespace std;
int main()
{
  my_code
  int t;
  cin>>t;
  while(t--)
  {
    int array[3];
    int a,b,c,ans=0;
    cin>>array[0]>>array[1]>>array[2];
    sort(array,array+3);
    a=array[0];
    b=array[1];
    c=array[2];
    fli(i,0,3)
    {
      if(array[i]>=1)ans++;
    }
    if(a==2)
    {
      cout<<(c>=3?ans+2:ans+1)<<endl;
    }
    else if(a>=3)
    {
      cout<<ans+3<<endl;
    }
    else
    {
      cout<<(b<=1?ans:ans+1)<<endl;

    }


  }
  The_End;
}
