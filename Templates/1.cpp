//Templates are the features of c++ which enables us to define generic class and functions thus providing support for generic programming
//Examples of class templates
#include<iostream>
#include<typeinfo>
using namespace std;
template<class T>	//now i can use T as a datatype
class Romanch{
	public:
		T a,b;
		void input1(void){
			cout<<"Enter a\n";
			cin>>a;
			cout<<"Enter b\n";
			cin>>b;
		}
		T input2(T a,T b){
			cout<<a<<endl<<b;
		}
};
int main(){
	Romanch <int>r;
	//r.input1();
	r.input2(2);
	
}
