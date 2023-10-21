#include<iostream>
using namespace std;
class romanch{
	private:
		int a;
	public:
		romanch(int a){
			this->a=a;
		}
		void operator++(int){
			a++;
		}
		void show(void){
			cout<<a;
		}
};
int main(){
	romanch r1(2);
	r1++;
	r1.show();
}
