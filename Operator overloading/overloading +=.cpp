#include<iostream>
using namespace std;
class class1{
	private:
		int a,b;
	public:
		void getdata(void){
			cout<<"Enter value of a ";
			cin>>a;
			cout<<"Enter value of b ";
			cin>>b;
		}
		void showdata(void){
			cout<<"The value of a: "<<a;
			cout<<"The value of b: "<<b;
		}
		void operator+=(class1 temp){
			this->a=a+temp.a;
			this->b=b+temp.b;
		}
};
int main(){
	class1 c1,c2;
	c1.getdata();
	c2.getdata();
	c1+=c2;
	c1.showdata();
}
