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
void mdsaniulbasirsaz(int n)
{
    vector<int>v(n);
    vector<int>s(n);
    string str;cin>>str;
    int c1=1,c2=0;
    v[0]=1;
    s[0]=0;
    for(int i=1;i<n;i++){
        v[i]=v[i-1]^(str[i-1]-48);
        if(v[i]==1)
        {
            c1++;
        }
        s[i]=s[i-1]^(str[i-1]-48);
        if(s[i]==1)
        {
            c2++;
        }
    }
    if(c2>c1){
        cout<<c2<<"\n";
    }else
    {
        cout<<c1<<"\n";
    }
}
int main()
{
  my_code
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    mdsaniulbasirsaz(n);
  }
  The_End;
}
