//general operator overloading
#include<iostream>
using namespace std;
class c1{
	private:
		int real,imag;
	public:
		c1 operator-(c1);
		void setter(void){
			cout<<"Enter real: ";
			cin>>real;
			cout<<endl<<"Enter imag: ";
			cin>>imag;
		}
		void show(void){
			cout<<"output: "<<real<<" + i"<<imag;
		}
};
c1 c1::operator-(c1 class2){
			c1 temp;
			temp.real=real-class2.real;
			temp.imag=imag-class2.imag;
			return temp;
		}
int main(){
	c1 class1,class2,class3;
	class1.setter();
	class2.setter();
	class3=class1-class2;
	class3.show();
	return 0;
}
