#include<iostream>
using namespace std;
class c1{
    public:
    int a,b;
    c1(void);
};
c1 ::c1(void){
        a=1;
        b=2;
}
int main(){
    c1 x,y,z;
    cout<<x.a<<endl<<y.b;
}