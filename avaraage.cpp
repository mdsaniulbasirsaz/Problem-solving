#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,v;
        cin>>n>>k>>v;
        vector<int>s;
        int x,sum=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            s.push_back(x);
        }
        for(auto it:s)
        {
            sum+=it;
        }
        int y=v*(n+k)-sum;
        if(y%k==0 && y>=k)
        {
            cout<<y/k<<endl;
        }
        else
        cout<<"-1"<<endl;
    }

    return 0;
}