#include<iostream>
using namespace std;
class animal{													//this is called abstract class. it cannot is instantiated
	public:
		int age;
		int weight;
		string habitat;
		int legs;
		int eyes;
		int ears;
		virtual void sound(void)=0;										//virtual function
};
class dog:public animal{
	public:
		int property1,property2;
		float property3,property4;
		void sound(void){
			cout<<"vou vou"<<endl;
		}
		int age=14;
		int weight=50;
		string habitat="domestic, terai";
		int legs=4;
		int eyes=2;
		int ears=2;
};
class car:public animal{
	public:
		int property1,property2;
		float property3,property4;
};
int main(){
	dog d1;
	d1.sound();
	cout<<"dog "<<d1.age<<" years "<<d1.weight<<"kg "<<" found in "<<d1.habitat<<" "<<d1.legs<<" legs, "<<d1.eyes<<" eyes, "<<d1.ears<<" ears"<<endl;
}
