/* Md Saniul Basir Saz 
   Department Of Computer Science and Engineering 
   Jashore University Of Scinece and Technology 
   Student Id: 200103 
   Email: saniul.cse.just@gmail.com
   Mobile: 01306032236 */
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
  int a,b,c,d;
  while(cin>>a>>b>>c>>d)
  { int x;int y;
    if(a<=12)
    {
        x=a*60 + b;
    }
     if(12<a && a>=24)
    {
        x=(24-a)*60+b;
    }
     if (a>24)
    {
        x=(a-24)*60+b;
    }
    if(c<=12)
    {
        x=c*60 + d;
    }
     if(12<c && c>=24)
    {
        x=(24-c)*60+d;
    }
     if (c>24)
    {
        x=(c-24)*60+d;
    }
    cout<<abs(x-y)<<nl;
  }
  The_End;
}
