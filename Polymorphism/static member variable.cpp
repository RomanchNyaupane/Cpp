//create a class thet includes a data member that holds a serial number for each object created for each object created from the class. that is, the first object created will
//be numbered 1, the second 2, and so on. When each object is created, its constructor can examine this count member variable to determine the appropriate serial number for
//the new object. The write a main program that creates and queries each one about its seroal number. it should respond Object number: 1,Object number:2 and so on.
#include<iostream>
using namespace std;
class c1{
	private:
		static int serial_number;
	public:
		int show(void){
			serial_number++;
			return serial_number;
		}
};
int c1::serial_number;
int main(){
	c1 obj1,obj2,obj3;
	cout<<"Object number: "<<obj1.show()<<endl;
	cout<<"Object number: "<<obj2.show()<<endl;
	cout<<"Object number: "<<obj3.show();
}
