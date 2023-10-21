//operator overloading with operator function
#include<iostream>
using namespace std;
class complex{
	private:
		int real,imag;
	public:
		complex(){}
		complex(int real,int imag){
			this->real=real;
			this->imag=imag;
		}
		complex operator+(complex obj2){
			complex temp;
			temp.real=real+obj2.real;
			temp.imag=imag+obj2.imag;
			return temp;
		}
		void show(void){
			cout<<real<<" + i"<<imag<<endl;
		}
};
int main(){
	int real,imag;
	complex num1(2,3),num2(5,4),num3;
	num3=num1+num2;
	num3.show();
}
