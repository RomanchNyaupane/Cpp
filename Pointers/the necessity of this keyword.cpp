#include<iostream>
using namespace std;
class parent{
	public:
		int a=5;
		void value_updater(int a){
			this->a=a;
			cout<<this->a<<endl;
		}
};
int main(){
	parent p1,p2,p3,p4,p5;
	p1.value_updater(4);
	p2.value_updater(5);
	p3.value_updater(6);
	p4.value_updater(7);
	p5.value_updater(8);
}
