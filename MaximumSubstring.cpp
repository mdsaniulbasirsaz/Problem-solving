#include<iostream>
using namespace std;
int main()
{
int n,d,m;
cin>>n>>d>>m;
for(int i=1;i<=m;i++)
{
int x,y;
cin>>x>>y;
if(x+y<=2*n-d&&x-y<=d&&x+y>=-d&&x+y>=d)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}