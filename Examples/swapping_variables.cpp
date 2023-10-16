#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a>>b;
    cout<<a<<endl<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b;
}