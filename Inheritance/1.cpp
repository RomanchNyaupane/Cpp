#include<iostream>
using namespace std;
class parent{
	public:
		string x="this is parent class ";
		void print(){
			cout<<"print parent ";
		}
};
class child:public parent{
	public:
	void print(){
		cout<<"print child";
	}
};
int main(){
	child c1;
	c1.print();
}
