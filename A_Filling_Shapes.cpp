#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long c=pow(2,n/2);
    if(n%2!=0)
    {
        cout<<"0"<<endl;
    }
    else
    cout<<c<<endl;
    return 0;
}