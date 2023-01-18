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
  int n,k;
  cin>>n>>k;
  vector<int>v;
  int x;
  fli(i,0,n)
  {
  	cin>>x;
  	v.push_back(x);
  }
  int y;
  cin>>y;
  int s=0,b;
  fli(i,0,n)
  {
  	s+=v[i];
  }
  int a=(s-v[k])/2;
  if(a==y)
  {
  	cout<<"Bon Appetit"<<nl;
  }
  else
  {
  	cout<<y-a<<nl;
  }
  The_End;
}
