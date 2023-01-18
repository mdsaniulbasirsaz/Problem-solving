
/*
Md saniul Bassir saz
Dept of CSE
JUST 
St Id: 200103
*/
#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Your Number of Element size=";
    cin>>n;
    list<int>list1,list2;
    cout<<"Enter Your Elements :"<<endl;
    cout<<endl<<endl<<endl;
    for(int k=0,l;k<n;k++){
        cin>> l;
        list1.push_back(l);
        list2.push_front(l);
    }

    if(list1 == list2){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
