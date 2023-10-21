//overloading the ostream and istream operators
#include<iostream>
using namespace std;
class classA{
	private:
		int a,b;
	public:
		void showdata(void){
			cout<<"a is "<<a<<" b is "<<b<<endl;
		}
		friend istream &operator>>(istream &input,classA &temp){
			cout<<"Enter value of a ";
			input>>temp.a;
			cout<<"Enter value of b ";
			input>>temp.b;
		}
		friend ostream &operator<<(ostream &output,classA &temp){
			cout<<"a="<<temp.a;
			cout<<endl<<"b="<<temp.b;
		}
};
int main(){
	classA class1;
	cin>>class1;
	cout<<class1;
}
