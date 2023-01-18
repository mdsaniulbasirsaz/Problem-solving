#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        double r;
        cin>>r;
        double ans=(8*r*r)-(2*3.1414*r*r);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}
