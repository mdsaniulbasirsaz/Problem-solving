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
  int a,b,s1=0,s2=0,c1=0,c2=0;
  cin>>a>>b;
  int x,y;
  cin>>x>>y;
  int p,q;cin>>p>>q;
  int r[p],s[q];
    fli(i,0,p)
    {
        cin>>r[i];
    }
    flj(j,0,q)
    {
        cin>>s[j];
    }
    fli(i,0,p)
    {
        if(a<=x+r[i]&&x+r[i]<=b)
        {
            c1++;
        }
    }
    flj(j,0,q)
    {
        if(a<=y+s[j]&& y+s[j]<=b)
        {
            c2++;
        }
    }
    cout<<c1<<endl<<c2<<nl;
  The_End;
}
