//using friend functions to add data members of two different classes
#include<iostream>
using namespace std;
class XYZ;
class ABC{
	private:
		int a;
	public:
		ABC(){
			a=4;
		}
		int b;
		friend void add(ABC,XYZ);
};
class XYZ{
	private:
		int a;
	public:
		XYZ(){
			a=5;
		}
		int b;
		friend void add(ABC,XYZ);
};
void add(ABC temp1,XYZ temp2){
	cout<<"The sum is "<<temp1.a+temp2.a<<endl;
}
int main(){
	XYZ a;
	ABC b;
	add(b,a);
}
