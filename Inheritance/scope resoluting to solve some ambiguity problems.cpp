//how to scope resolute in some ambibuity problem?
#include<iostream>
using namespace std;
class classA{
	public:
		int a=5;
};
class classB:public classA{
	public:
		int a=4;
};
int main(){
	classB b;
	cout<<b.classB::a;
}

