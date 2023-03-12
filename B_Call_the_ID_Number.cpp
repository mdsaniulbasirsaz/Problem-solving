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
  int n;
    cin >> n;  // take input n

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];  // take input a
    }

    vector<bool> called(n, false);  // initialize called vector to false

    // call out IDs according to a
    for (int i = 0; i < n; i++) {
        int ai = a[i] - 1;  // 0-indexed
        if (!called[ai]) {
            cout << ai+1 << endl;
            called[ai] = true;
        }
    }

    // print the remaining uncalled IDs
    for (int i = 0; i < n; i++) {
        if (!called[i]) {
            cout << i+1 << endl;
        }
    }


  The_End;
}
