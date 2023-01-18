#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
  cin>>node>>edge;
  vector<int>v[node];
  int a,b;
  for(int i=0;i<edge;i++)
  {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
  }
  for(int j=0;j<edge;j++)
  {
    for(auto x: v[j])
    {
        cout<<x<<" ";
    }
    cout<<endl;
  }

    return 0;
}