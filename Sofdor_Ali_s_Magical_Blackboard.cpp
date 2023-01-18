#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,s=0;
        cin>>a>>b;
        for(int i=1;i<=b;i++)
        {
            s+=a;
        }
        cout<<s<<endl;
    }
    return 0;
}