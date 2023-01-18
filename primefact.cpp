//write a program in c++ prime fact 

#include<iostream>
using namespace std;

void primefact(int N)
{
    int ans = 0;
    for(int i=2;i*i<=N;i++)
    {
        if(N%i==0)
        {
            ans++;
            while(N%i==0)
            {
                N/=i;
            }
        }
    }
    if(N>1)ans++;
    cout<<ans<<endl;
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        break;
        cout<<n<<" : ";
       primefact(n);
    }
}