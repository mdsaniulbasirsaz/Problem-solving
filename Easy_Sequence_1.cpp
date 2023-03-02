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
int compute_F(int X) {
    if (X == 1) {
        return 1;
    } else if (X % 2 == 0) {
        return compute_F(X / 2) * compute_F(X / 2) + 1;
    } else {
        return compute_F(X / 2) * compute_F(X / 2 + 1) + 2;
    }
}
int find_X(int FX) {
    // Search in the range [1, 10^5] since the sequence grows quickly
    int left = 1, right = 100000;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (compute_F(mid) == FX) {
            return mid;
        } else if (compute_F(mid) < FX) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}

int main()
{
  my_code
   // Read the number of test cases
    int T;
    cin >> T;

    // Process each test case
    for (int i = 0; i < T; i++) {
        int FX;
        cin >> FX;
        int X = find_X(FX);
        cout << X << endl;
    }
  The_End;
}
