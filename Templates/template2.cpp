#include<iostream>
using namespace std;
template <class T>
class classa{
	public:
		T a,b;
		classa(){
			a=1;
			b=1;
		}
		T add(T x, T y){
			a=a+x;
			b=b+x;
		}
		void show(void){
			cout<<"a is "<<a<<" b is "<<b<<endl;
		}
};
int main(){
	classa<int>c1;
	c1.add(2,3);
	c1.show();
}
