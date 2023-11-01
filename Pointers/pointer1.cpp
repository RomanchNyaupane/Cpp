//what is pointer?
//-->a pointer is a derived data type that references another variable by storing the memory location of another variable

//example to show declaration of pointer
/*
#include<iostream>
using namespace std;

int main(){
	int *a;
	int b=5;
	a=&b;
	cout<<a;
	//another way of doing above code
	int x,*y;
	x=5;
	y=&x;
	cout<<y;
}
*/
//example of pointer to pointer
/*
#include<iostream>
using namespace std;
int main(){
	int a,*b,**c;
	b=&a;
	c=&b;
	a=1;
	cout<<a<<" "<<b<<" "<<c<<endl;
}
*/
//example of generic pointers
#include<iostream>
using namespace std;
int main(){
	int *a;
	int b=5;
	*a+=b;
	cout<<a<<" "<<b;
}
