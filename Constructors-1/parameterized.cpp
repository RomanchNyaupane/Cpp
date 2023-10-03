//the constructor that can take values as argument, either user generated or program generated and assign the values to the data members is called parameterized constructor
#include<iostream>
using namespace std;
//we can pass argument to constructor function when an object is created. parameterized constructors help to initialize data members of an object.
//the constructor that can take arguments are called parameterized constructors
class romanch{
	private:
		int a,b;
		string name;
	public:
		romanch(int a,int b, string name){			//this is called parameterized constructor
			this->a=a;
			this->b=b;
			this->name=name;
			cout<<a<<" "<<b<<" "<<name<<endl;
		}
};
int main(){
	romanch c1(2,4," nyaupane sir");
}
