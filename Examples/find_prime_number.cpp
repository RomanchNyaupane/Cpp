#include<iostream>
using namespace std;
int main(){
    int a,b,c=0,i;
    cout<<"Enter a number ";
    cin>>a;
    for(i=2;i<=a/2;i++){
        if(a%i==0){
        c=1;
        }
    }
    if(c==0)
    cout<<"Prime";
    else
    cout<<"not prime";
}