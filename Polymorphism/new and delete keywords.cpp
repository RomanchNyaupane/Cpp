//new operators
//they create memory spaces and returns the pointer of that address. so we can use that pointer to access the contents of
//memory allocated
#include<iostream>
using namespace std;
class testA{
	public:
		
		int a,b;
		string c;
		char d;
		float e;
		double f;
		long double g;
		static int h;
};
int main(){
	testA item;
	testA *ptr;
	ptr=new testA();			//memory size same to the size of testA class is created and pointer to that memory is returned back to ptr
	cout<<sizeof(item);
	int *ptr1,var1;
	ptr1=new int;
	*ptr1=4;
	cout<<endl<<*ptr1<<endl;
	delete ptr1;		//pointer is deleted. we can no longer use the pointer variable
	cout<<*ptr1;		//this outputs random memory location
}
