#include<iostream>
using namespace std;
//we can pass argument to constructor function when an object is created. parameterized constructors help to initialize data members of an object.
//the constructor that can take arguments are called parameterized constructors
class romanch{
	private:
		int a,b;
		string name;
	public:
		romanch(int x,int y, string nam):a(x),b(y),name(nam){			//this is called parameterized constructor
		cout<<a<<" "<<b<<" "<<name;
		}			
};
int main(){
	romanch c1(2,4,"nyaupane sir");
}
