#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int d,c;
        cin>>d>>c;
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int b1,b2,b3;
        cin>>b1>>b2>>b3;
        int d1=a1+a2+a3;
        int d2=b1+b2+b3;
        int sum=d1+d2;
        if(d1>=150)
        int s1=sum+2*d;
        int s2=sum+c;
        if(s1>s2)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;


    }
    return 0;
}