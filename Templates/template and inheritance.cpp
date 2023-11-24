#include<iostream>
using namespace std;
template <class t>
class inherit{
	public:
		t a=5,b=6;
};
class child:public inherit{
	public:int x=5;
};
int main(){
	inherit <int> in1;
	child <int>c1;
	cout<<c1.a;
}
