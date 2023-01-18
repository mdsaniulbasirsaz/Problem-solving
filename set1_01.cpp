#include <bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;
bool isPower_of_Three(ll n)
{
    if (n <= 0)
        return false;
    if (n % 3 == 0)
        return isPower_of_Three(n / 3);
    if (n == 1)
        return true;
    return false;
}
int main()
{
    ll num1;
    cout<<"Input:";
    cin>>num1;
    cout<<"OutPut:"<<endl;
    if (isPower_of_Three(num1))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}

