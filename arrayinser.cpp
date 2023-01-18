#include<iostream>
using namespace std;
void insvalue(int arr[],int n)
{
    int value,positions;
    cin>>value>>positions;
    n++;
    for(int i=n-1;i>=positions;i--){
        arr[i]=arr[i-1];
    }
    arr[positions-1]=value;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    insvalue(arr,size);
}