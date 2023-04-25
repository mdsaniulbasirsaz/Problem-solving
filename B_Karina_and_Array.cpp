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
  while(t>0){
    ll n;cin>>n;
    
    if(n==2)
    {
        ll x,y;cin>>x>>y;
        ll x1=x*y;
        cout<<x1<<nl;
        t--;
        continue;
    }
    ll a=0,b=0,c=0,d=0;
    ll z=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==0)
        {
            z++;
        }
       
        if(x>0)
        {
            if(x>=a)
            {
            b=a;
            a=x;
            }else
            {
                if(x>b){
                    b=x;
                }
            }
        }
        else if(x<0){
            if(x<=c){
            d=c;
            c=x;
            }else if(x<d){
                d=x;
            }
        }
    }
    /*sort(v.begin(),v.end());
    int  ans;
    vector<int>s;
    for(int i=0;i<n-1;i++){
        ans=v[i]*v[i+1];
        s.push_back(ans);
    }
    int  m=0;
    for(int i=0;i<s.size();i++){
        m=max(m,s[i]);
    }
    cout<<m<<"\n";*/
   
  ll a1=0,a2=0;
  if(a>0 &b>0 && c<0 && d<0)
  {
    a1=a*b;
    a1=c*d;
    if(a1>a2){

        cout<<a1<<nl;
    }
    else
    {
        cout<<a2<<nl;
    }

  }
  else if(a>0 && b>0)
  {
    a1=a*b;
    cout<<a1<<nl;
  }
  else if(c<0 && d<0)
  {
    a2=c*d;
    cout<<a2<<nl;
  }
  else
  {
    cout<<0<<nl;
  }
  t--;
  }
  The_End;
}
