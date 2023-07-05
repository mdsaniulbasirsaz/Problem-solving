/*
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
#define EP 0.01
double solution(double x)
{
    return x*x*x-x*x+2;
}
void bisection(double a ,double b)
{
    if(solution(a)*solution(b)>=0)
    {
        cout<<"Your Assumed vale is not correct"<<endl;
        return;
    }
    double c=a;
    while((b-a)>=EP)
    {
        c=(a+b)/2;
        if(solution(c)==0.0)
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
    }
    cout<<"Solution ="<<c<<endl;

}
int main(){
    //double a=-2, b=1;
     double a =-500, b = 100;
    bisection(a,b);
    return 0;

}
*/

/*
#include<bits/stdc++.h>
#define EP 0.01
using namespace std;
double solution(double x){
    return x*x*x-x*x+2;
}
void bisection(double a,double b){
    if(solution(a)*solution(b)>=0)
    {
        cout<<"Your assumed value is not correct ..Try ageain"<<endl;
        return;
    }
    double c=a;
    while((b-a)>=EP){
        c=(a+b)/2;
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
        cout<<"Solution is = "<<c<<endl;
    }
    //cout<<"Solution is = "<<c<<endl;
}
int main(){
    double a=-2,b=1;
    bisection(a,b);
    return 0;
}*/
#include<bits/stdc++.h>
#include<cmath>
#define EP 0.01
using namespace std;
double solution(double x)
{
    return 3*x-cos(x)-1;
}
void bisection(double a,double b)
{
    if(solution(a)*solution(b)>=0)
    {
        cout<<"Your Assumed value is not correct"<<endl;
        return;
    }
    double c=a;
    while((b-a)>=EP)
    {
        int i=0;
            c=(a+b)/2;
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
            cout<<"Iteration "<<i++<<": "<<c<<endl;
    }
}
int main(){
    double a,b;
    cin>>a>>b;
    bisection(a,b);
    return 0;
}
