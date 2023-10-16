#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c=1,d,i;
    cout<<"enter count of numbers of fibonacci seris"<<endl;
    cin>>d;
    cout<<endl;
    for(i=1;i<=d;i++){
        cout<<c<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}