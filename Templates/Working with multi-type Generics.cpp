//making a fully functioning calculator by using multitype generics
#include<iostream>
using namespace std;
template<class T,class U>		//now we can use T and U as template parameters or simply data-type names in our code
class calculator{
	private:
		T a;
		U b;
	public:
		calculator(){
			cout<<"Enter value of a"<<endl;
			cin>>a;
			cout<<"Enter value of b"<<endl;
			cin.ignore();
			cin>>b;
		}
		void add(){
			cout<<"The sum is "<<a+b<<endl;
		}
		void subtract(){
			cout<<"The difference is "<<a-b<<endl;
		}
		void product(){
			cout<<"The product is "<<a*b<<endl;
		}
};
int main(){
	calculator <int,float>calc;
	calc.add();
	calc.subtract();
	calc.product();
}
