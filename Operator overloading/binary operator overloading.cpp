//subtract two complex numbers
#include<iostream>
using namespace std;
class complex{
	private:
		int real;
		int imag;
	public:
		void setValues(int a, int b){
			real=a;
			imag=b;
		}
		void result(void){
			cout<<real<<" +i"<<imag;
		}
		complex operator -(complex c2){
			complex temp;
			temp.real=real-c2.real;
			temp.imag=imag-c2.imag;
			return temp;
			
			
		}
};
int main(){
	complex c1,c2,c3;
	int a,b;
	cout<<"Enter real number of first statement "<<endl;
	cin>>a;
	cout<<"Enter imaginary part of second statement "<<endl;
	cin>>b;
	c1.setValues(a,b);
	cout<<"Enter real number of second statement "<<endl;
	cin>>a;
	cout<<"Enter imaginary part of second statement "<<endl;
	cin>>b;
	c2.setValues(a,b);
	c3=c1-c2;
	c3.result();
}
