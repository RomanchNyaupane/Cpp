//copy constructor is a type of constructor that can create a new object as a copy of an existing object
#include<iostream>
using namespace std;
class copy1{
	private:
		int a,b;
	public:
		copy1(int a,int b){
			this->a=a;
			this->b=b;
		}
		copy1(copy1 &temp){
			b=temp.a;
			a=temp.b;
		}
		void show(void){
			cout<<a<<" "<<b<<endl;
		}
};
int main(){
	copy1 c1(2,3);
	copy1 c2(c1);
	c2.show();
}
//what happens when reference is not used in the definition of copy constructor??
/*
take above example. when the line "copy c2=c1" in main function is invoked then &temp=c1 occours to pass the argument. in this statement, call by reference is used to pass the argument
if we remove '&' then temp=c1 occours. since temp(not &temp) is object of type copy1 (temp is object because of statement (copy1 temp) in definition), the copy constructor is called again because temp=c1 is actually copying c1 to temp.
in this way, endless loop is created.
*/
