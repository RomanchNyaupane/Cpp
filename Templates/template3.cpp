#include<iostream>
using namespace std;
template <class T>
class parent{
	public:
		T a=5,b=6;
		void show(void){
			cout<<"a+b= "<<a+b<<endl;
		}
		parent(T x,T y){
			a=a+x;b=b+y;
		}
};
int main(){
	parent <int>p1(2,3);
	p1.show();
}
