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
  int t;cin>>t;
  while(t--){
    string str;
    cin>>str;
    int ans=1;
    int n=str.length();
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]=='?')
        {
            if(i==0){
            ans=ans*9;
            }
        else
        {
            ans=ans*10;
        }
        }
    }
    if(str[0]=='0')
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<ans<<"\n";
    }
  }
  The_End;
}
