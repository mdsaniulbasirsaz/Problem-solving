#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
using namespace std;
int a,x,y;
int submin(vector<int>s){
    if(s.empty())return 10000000000000;
    int m1=s[0],m2=s[0];
    int m3=abs(s[0]);
    for(int i=1;i<(int)s.size();i++)
    {
        m1=min(m1,s[i]);
        m2=max(m2,s[i]);
        m3=min(m3,abs(s[i]));
    }
    return min(m1*m2,m3*m3);
}
int submax(vector<int>s)
{
    if(s.empty()) return -1000000000000;
    int m3=abs(s[0]);
    for(int i=1;i<(int)s.size();i++)
    {
        m3=max(m3,abs(s[i]));
    }
    return m3*m3;
}
void somadhan()
{
    cin>>a;
    x=100000000000000;
    y=-10000000000000;
    vector<int>s;
    for(int i=1,p;i<a;i++)
    {
        cin>>p;
        s.push_back(p);
    }
    x=min(x,submin(s));
    y=max(y,submax(s));
    cout<<x;
    cout<< " "<<y<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        somadhan();
    }
}