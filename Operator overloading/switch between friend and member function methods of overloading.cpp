#include<iostream>
using namespace std;
class test{
	private:
		int a;
	public:
		int b;
		test(){
			a=2;
		}
		test operator+(int){
			test temp;
			temp.a=a+1;
			return temp;
		}
		void show(void){
			cout<<"a is "<<a;
		}
};
int main(){
	test t1,t2,t3;
	t1=t1+2;
	t1.show();
}

