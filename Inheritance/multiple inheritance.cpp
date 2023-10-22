//lets try multilevel inheritance
//multiple inheritance involves deriving from more than one parent class or deriving more child from a single parent class
#include<iostream>
using namespace std;
class parent1{
	public:
		int a=1,b=2;
		
	protected:
		int c=3,d=4;
	private:
		int e=5,f=6;
};
class parent2{
	public:
		int a=7,h=8;
	
	protected:
		int i=9,j=10;
	private:
		int k=11,l=12;
};
class child : public parent1, public parent2{
	private:
		int gh=1;
	friend int parent1::show(parent1 sample1){
		cout<<sample1.e;
	} 
};
int main(){
	child c1;
	c1.show(c1);
}

