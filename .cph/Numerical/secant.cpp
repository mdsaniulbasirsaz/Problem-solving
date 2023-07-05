
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
float f(float x){
    return x*x*x-2*x-5;
}
void secant(float x0,float x1,float e,int n)
{
    float x2,xm,c;
    int i=0;
    float f0,f1,f2;
    do{
        f0=f(x0);f1=f(x1);

        if(f0==f1)
        {
            cout<<"Mathematical error"<<endl;
            break;
        }
        x2=x1-(f(x1)*(x1-x0)/(f1-f0));
        f2=f(x2);


        float error=abs(x2-x1)/abs(x2);
        cout<<"Iteration = "<<i<<"    "<<"x2= "<<x2<<"      f(x2)= "<<f(x2)<<"     Error="<<error<<endl;

        x0=x1;
        f0=f1;
        x1=x2;
        f1=f2;

        i=i+1;

    if(i>n)
    {
        cout<<"Not Convergent"<<endl;
        break;
    }

    }while(fabs(f2)>e);
        cout<<endl<<"Root is = "<<x2<<endl;
}

int main(){
    float x0,x1,e;
    int n;
    cout<<"Enter First Guess:"<<endl;
    cin>>x0;
    cout<<"Enter Second Guess:"<<endl;cin>>x1;
    cout<<"Enter Error: "<<endl;cin>>e;
    cout<<"Enter Number of iteration :"<<endl;cin>>n;
    secant(x0,x1,e,n);
    return 0;
}

/*
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
float f(float x){
    //return x*x*x-x+1;
    return  x*x*x - 2*x - 5;
}

void secant(float x0,float x1,float e,int n)
{
    float x2;
    int i=1;
    float f0,f1,f2;

    do{
        f0=f(x0),f1=f(x1);
        if(f0==f1)
        {
            cout<<"Mathematical Error"<<endl;
            break;

        }
        x2=x1-(f1*(x1-x0)/(f1-f0));
        f2=f(x2);


        float error=abs(x2-x1)/abs(x2);
        cout<<"Iteration= "<<i++<<"     x2= "<<x2<<"    f(x2)= "<<f2<<"    error="<<error<<endl;


        x0=x1;
        f0=f1;
        x1=x2;
        f1=f2;

        if(i>n){
            cout<<"Not Convergent"<<endl;
            break;
        }
    }while(fabs(f2)>e);

        cout<<endl<<"The Root is = "<<x2<<endl;
}
int main(){
    float x0,x1,e;int n;
    cin>>x0>>x1>>e>>n;
    secant(x0,x1,e,n);
    return 0;
}*/