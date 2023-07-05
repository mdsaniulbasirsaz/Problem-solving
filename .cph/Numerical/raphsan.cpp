#include<bits/stdc++.h>
using namespace std;
float f(float x) { 
    return 3*x-cos(x)-1;

}
float g(float x)
{
    return 3+sin(x);
}
void raphson(float x0,float e,int n)
{
    float x1,f0,f1,g0;
    int i=0;


    do{
        g0=g(x0);
        f0=f(x0);

        if(g0==0.0)
        {
            cout<<"Mathehmatical error"<<endl;
            break;
        }
        x1=x0-f0/g0;
        float error=abs(x1-x0)/abs(x1);
        cout<<"Iteration : "<<i++<<"    x1: "<<x1<<"   f(x1): "<<f1<<"   error:"<<error<<endl;

        x0=x1;
        if(i>n)
        {
            cout<<"Not convergent"<<endl;break;
        }
        f1=f(x1);

    }while(fabs(f1)>e);

    cout<<"The Root is : "<<x1<<endl;



}
int main(){
    float x0,e;
    int n;
    cin>>x0>>e>>n;
    raphson(x0,e,n);
    return 0;
}