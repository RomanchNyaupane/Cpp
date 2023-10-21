//unary operator overloading
#include<iostream>
using namespace std;
class practice{
	private:
		int a;
	public:
		practice(int b){
			a=b;
		}
	void operator ++(){
		a++;
	}
	void output(void){
		cout<<a;
	}
};
int main(){
	int a;
	cin>>a;
	practice c1(a);
	++c1;
	c1.output();
}
