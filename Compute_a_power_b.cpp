#include<iostream>
using namespace std;
#define mod 1000000007

long long power(long long b,long long a,long long m)
{
    long long result=1;
    while(a)
    {
        if(a%2==1)
        {
            result=(result*b)%m;
            a--;
        }
        else
        {
            b=(b*b)%m;
            a/=2;
        }
    }
    return result;
}

int main(){
    long long a;
    cin>>a;
    cout<<power(8,a,10)<<endl;

    return 0;
}