#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       int k;
       cin>>n;
       vector<int>s(n);
       for(int j=0;j<n;j++)
       {
        cin>>s[j];
       }
       
       cin>>k;
       set<int>p;
       int y;
       for(int j=0;j<k;j++)
       {
        cin>>y;
        p.insert(y);
       }
       for(int j=0;j<n;j++)
       {
            if(p.count(s[j])){
                continue;
            }
            else
            {
                cout<<s[j]<<" ";
            }
       }
       cout<<endl;
       

        
        
    }
}