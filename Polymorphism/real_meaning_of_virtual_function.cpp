//lets understand the meaning of the statement given below
//-->	when a function is declared virtual in c++, then the function call will be based on type of object pointer rather than type of the pointer itself
// now what that statement means is if function show() in below program is not declared virtual then the function call will be based
// on type of pointer (i.e. base class pointer). only function of base pointer is executed when called.
// but when virtual is used, c++ determines which function to call based on type of object pointed. here we pointed to child type object
// so show() of child type object is called and not parent type.



#include<iostream>
using namespace std;
class parent{
	public:
		int a,b;
		parent(){
			a=5;b=6;
		}
		void virtual show(void){
			cout<<"a is "<<a<<" b is "<<b<<endl;
		}
};
class child:public parent{
	public:
		int x,y;
		child(){
			x=7;y=8;
		}
		void show(void){
			cout<<"x is "<<x<<" y is "<<y<<endl;
		}
};
int main(){
	parent p1,*ptr_p1;
	child c1,*ptr_c1;
	ptr_p1=&c1;
	ptr_p1->show();
}
