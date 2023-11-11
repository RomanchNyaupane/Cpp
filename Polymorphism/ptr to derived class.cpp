//pointers to derived class
#include<iostream>
using namespace std;
class parent{
	public:
		int roll=48;
		string name="romanch";
		virtual void show(void){										//run this program by putting and removing virtual
			cout<<"Hi! from parent class"<<endl;
		}
};
class child:public parent{
	public:
		string department="EEE";
		string name="romanch";
		void show(void){
			cout<<"Hi! from child class"<<endl;
		}
};
int main(){
	parent p1,*ptr1;
	child c1;
	ptr1=&c1;
	//cout<<ptr1->name;		//derive vako kura matra access garna milirako xa
	ptr1->show();
}
