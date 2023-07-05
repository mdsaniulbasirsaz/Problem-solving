//False Position methods 
#include<bits/stdc++.h>
#include<cmath>
#define MAX_Iteration 10
using namespace std;
double solution(double x)
{
    return x*x*x-3*x+1;
    //return x*x*x - x*x + 2;
}
void falseposition(double a,double b){
    if(solution(a)*solution(b)>=0)
    {
        cout<<"Your assumed value is not correct"<<endl;
        return;
    }
    double c=a;
    double prev_c=c;
    for(int i=0;i<MAX_Iteration;i++)
    {
        prev_c=c;
        c=(b*solution(a)-a*solution(b))/(solution(b)-solution(a));
       double error=abs(c-prev_c)/abs(c);
       if(solution(a)*solution(c)==0.0)
        {
            break;
        }
        else if(solution(a)*solution(c)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        cout<<"Iteration "<<": "<<c<<" Error="<<error<<endl;
    }
            //cout<<"Iteration "<<": "<<c<<" Error="<<error<<endl;

}
int main(){
    double a=0,b=1;
    falseposition(a,b);
    return 0;
}