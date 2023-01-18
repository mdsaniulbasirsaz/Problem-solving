#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long >s;
        long long x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            s.push_back(x);
        }
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        cout<<s.front()<<endl;
    }
    return 0;
}