//overloading by friend functions
#include<iostream>
using namespace std;
class romanch{
	private:
		int real,imag;
	public:
		romanch(){}
		romanch(int real,int imag){
			this->real=real;
			this->imag=imag;
		}
		void show(void){
			cout<<real<<"+i"<<imag<<endl;
		}
		friend romanch operator+(romanch,romanch);
};
romanch operator+(romanch temp1,romanch temp2){
	romanch temp;
	temp.real=temp1.real+temp2.real;
	temp.imag=temp1.imag+temp2.imag;
	return temp;
}
int main(){
	romanch r1(2,3),r2(4,5),r3;
	r3=r1+r2;
	r3.show();
}
