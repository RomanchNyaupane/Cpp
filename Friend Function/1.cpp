//in this program, we will use friend function for accesing private data members
#include<iostream>
using namespace std;
class c1{
	int a;
	int b;
	public:
		friend void accesser(c1);
		{cout<<sample.a<<endl<<sample.b;
		}
		c1(){
			a=1;
			b=2;
		}
};
void accesser(c1 sample){
	cout<<sample.a<<endl<<sample.b;
}
int main(){
	c1 class1;
	accesser(class1);
}
