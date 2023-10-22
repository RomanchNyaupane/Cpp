//constructors in derived class


/*
//if the base class contains no constructors then we need not put constructors in derived class

#include<iostream>
using namespace std;
class parentA{
	public:
		int var_A=5;
};
class childA:public parentA{
	public:
		int var_B;
};
int main(){
	childA chA;
	cout<<chA.var_A;
}
*/

/*
//if a base class contains constructors even with single argument then we must put constructor for derived class and pass the values to base class too while deriving the child class
//see program below. it wont execute because base class has an argument but derived class doesn't.
#include<iostream>
using namespace std;
class parent1{
	public:
		int a;
		parent1(int a){
			this->a=a;
		}
};
class child1:public parent1{
	public:
		child1(int b=5){}
		int b;
};
int main(){
	parent1 p1(5);
	child1 c1(6);
	cout<<c1.a;
}
*/



//we should make constructor in derived class and pass the arguments to base class from within the derived class in order to initialise the base class
#include<iostream>
using namespace std;
class parent1{
	public:
		int a1;
		parent1(int a1){
			this->a1=a1;
		}
};
class parent2{
	public:
		int a2;
		parent2(int a2){
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
		child1(int x1,int x2,int x3,int x4):parent1(x1),parent2(x2),parent3(x3){
			b=x4;
		}
};
int main(){
	child1 ch1(2,4,6,8);
	cout<<"first parent "<<ch1.a1<<endl<<"second parent "<<ch1.a2<<endl<<"third parent "<<ch1.a3<<endl<<"its own value "<<ch1.b<<endl;
}












