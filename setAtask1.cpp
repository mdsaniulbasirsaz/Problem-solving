#include<iostream>

using namespace std;

int main()
{
    int a,b;
    long long c=0,product=0;
   cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(i>15)
        {
        if(i%3==0 && i%6!=0)
        {
            c+=i*i;
        }
        }
    }
    cout<<"The squared Sum is: "<<c<<endl;
    for(int i=a;i<=b;i++)
    {
        if(i>15)
        {
        if(i%3==0 && i%6!=0)
        {
            product+=i;
        }
        }
    }
    cout<<"Product : "<<product<<endl;


    return 0;
}