#include<iostream>
using namespace std;
template<class T>
class parent{
	public:
		T a,b;
		parent(T x,T y){
			a=x;b=y;
		}
		void show(void){
			cout<<"a is "<<a<<" b is "<<b;
		}
};
int main(){																															
	parent <int>p1(2,3);
	p1.show();
}
