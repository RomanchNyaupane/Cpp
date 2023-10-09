#include<iostream>
using namespace std;
class c{
	private:
		int a,b;
	public:
		c(int a,int b){
			this->a=a;
			this->b=b;
			cout<<"this gives "<<this<<endl;
		}
		void updated_value(int a,int b){
			this->a=this->a+a;
			this->b=this->b+b;
			cout<<this->a<<" is new value of a "<<this->b<<" is new value of b "<<endl;
		}
		void show(void){
			cout<<"a is "<<a<<" b is "<<b<<endl;
		}
};
int main(){
	c c1(2,3);
	c1.updated_value(4,5);
}
