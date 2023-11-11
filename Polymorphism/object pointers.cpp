//pointers to objects
#include<iostream>
using namespace std;
class romanch{
	public:
		int a;
		int b;
		string name;
		romanch(int a,int b,string name){
			(*this).a=a;
			this->b=b;
			this->name=name;
		}
};
int main(){
	romanch r1(1,2,"romanch"),*ptr;
	ptr=&r1;
	cout<<ptr->a;
}
