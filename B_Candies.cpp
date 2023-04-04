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
    ll n;cin>>n;
    ll c=40;
    if(n%2==0){
        cout<<-1<<"\n";
    }
    else
    {
        ll c=40;
        
        vector<ll>a;
        while(n!=1 && c--){
            if(((n+1)/2)%2)
            {
                n=(n+1);
                n/=2;
                a.push_back(1);
            }
            else
            {
                n=(n-1)/2;
                a.push_back(2);
            }
        }
        if(c<0){
            cout<<-1<<"\n";
        }
        else if(n==1)
        {
            cout<<a.size()<<"\n";
             reverse(a.begin(),a.end());
        for(auto i:a)cout<<i<<" ";
        cout<<"\n";
        }
     else
    {
        cout<<-1<<"\n";
    }  
    }

  }
  The_End;
}
