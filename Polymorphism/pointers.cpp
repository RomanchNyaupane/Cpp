//what is polymorphism?
//polymorphism is a feature of c++ which allows us to redefine the meaning of functions and operators to behave differently
//in different scenarios

//#what are pointers?
//-->pointers are derived data type that act on another data by storing their memory location rather than the data itself.
//it defines where to get the data instead of storing the data.
#include<iostream>
using namespace std;
int main(){
	//declaring and defining a pointer
	int a=5,*b;
	b=&a;
	cout<<*b<<endl;
	//pointers store memory location of variables. double pointers store memory location of single pointer
	int **ptr;
	ptr=&b;
	cout<<**ptr<<endl;
	//void pointers
	int *x=0;
	cout<<*x;
}
