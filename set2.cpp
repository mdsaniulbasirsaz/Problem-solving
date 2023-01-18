#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int b[1000001];
int main ()
{
    int n; 
    cin>>n;
    int a[n];
    int ans=0;
    for(int i = 0; i<n; i++) {
        cin>>a[i];
        b[a[i]]++;
    }

    for(int i = 1; i<=1000001; i++) {
        if(b[i]>0) {
            ans+=((b[i] * (b[i]-1))/2);
        }
    }
    cout<<ans<<endl;
    return 0;
    
}