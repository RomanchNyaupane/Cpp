//constructor functions
/*
	constructors are special member functions that are used to initialise object and which are automatically called when an object is created
	constructors are special because their name is same as the name of the class
	they do not have any return type
*/
#include<iostream>
using namespace std;
class c1{
	public:
	int a,b;
	float c;
	public:
		c1(){
			a=1;
			b=2;
			c=3.3;
};
int main(){
	c1 class1;
	cout<<class1.a<<endl;
	cout<<class1.b<<endl;
	cout<<class1.c<<endl;
}
