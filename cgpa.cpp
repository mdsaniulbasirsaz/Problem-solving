#include<iostream>
using namespace std; 
int main() 
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n;
        cin>>n;
        double m,s=0;
        for(int i=1;i<=n;i++)
        {
            cin>>m;
            s+=m;
        }
        cout<<"Case "<<j<<": ";
        printf("%.3lf\n",s/n);
        
     }
}