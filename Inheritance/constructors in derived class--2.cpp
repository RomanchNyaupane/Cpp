//we should make constructor in derived class and pass the arguments to base class from within the derived class in order to initialise the base class
#include<iostream>
using namespace std;
class an_extra_class{
	public:
		int extra_a;
		an_extra_class(int extra_a){
			this->extra_a=extra_a;
		}
};
class parent1{
	public:
		int a1;
		parent1(int a1){
			this->a1=a1;
		}
};
class parent2:public an_extra_class{
	public:
		int a2;
		parent2(int a2,int extra):an_extra_class(extra){
			this->a2=a2;
		}
};
class parent3{
	public:
		int a3;
		parent3(int a3){
			this->a3=a3;
		}
};
class child1:public parent1,public parent2,public parent3{
	public:
		int b;
		child1(int x1,int x2,int x3,int x4):parent1(x1),parent2(x2,99),parent3(x3){
			b=x4;
		}
};
int main(){
	child1 ch1(2,4,6,8);
	cout<<"first parent "<<ch1.a1<<endl<<"second parent "<<ch1.a2<<endl<<"third parent "<<ch1.a3<<endl<<"its own value "<<ch1.b<<endl;
}
