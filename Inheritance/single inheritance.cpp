/*
what is inheritance?
->inheritance is a property by which an object automatically acquires properties and behaviours of another object.
->by inheritance, we can create a new class from existing class
->the derived class can have its own properties as well as that ones which are derived from the base class
->types of inheritance
1.single
2.multiple
3.multilevel
4.hierarchical
5.hybrid
*/

/*
//single inheritance-example 1
#include<iostream>
using namespace std;
class parent{
	public:
		string name="Romanch";
		string sur=" Nyaupane";
};
//syntax for creating a derived class		class derived-class-name : visibility_mode parent_class_name
//in above syntax, visibility mode means access specifier under which derived classes will be stored
class child : public parent{
	public:
		string name_2="romanch";
		string sur_2=" nyaupane";
};
int main(){
	child c1;
	cout<<c1.name<<endl;
	cout<<c1.name_2<<endl;
	cout<<c1.sur<<endl;
	cout<<c1.sur_2;
}*/



//single inheritance-example 2->changing visibility modes and seeing the effects
#include<iostream>
using namespace std;
class parent{
	protected:
		int a=1,b=2;
	public:
		int c=3,d=4;
	private:
		int e=12, f=34;
};
class child : public parent{
	protected:
		int x=5,y=6;
	public:
		int p=7,q=8;
		
};
int main(){
	child c1;
	cout<<c1.c;
}
