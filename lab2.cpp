#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s1[n],s2[n];//my name is md saniul Basir sa the name of  my country names is Bangla
    for(int i=0;i<n;i++)
    {
        cin>>s1[i];
    }
    for(int j=0;j<n;j++)
    {
        cin>>s2[j];
    }
    int i=0,j=0,x;
    while(i<n && j<n);
    {
        if(s1[i]==s2[j])
        {
            x=1;
            i++;j++;
        }
    }
    if(x==1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}