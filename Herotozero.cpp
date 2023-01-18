#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,c,d,count=0;
        cin>>n>>k;
        c=n;
        while(1)
        {
        if(c%k==0)
        {
            c=c/k;
            count++;
        }
        else
        {
            d=c%k;
             count+=d;
             c-=d;
        }
        if(c==0)
        break;
        }
        cout<<count<<endl;

    }
    return 0;
}