//a simple calculator using templates
#include<iostream>
using namespace std;
template<class T>
class calculate{
	public:
		T a,b;
		template<typename T1>
		T1 add(T a,T b){
			cout<<"The sum is "<<a+b<<endl;
		}
		template<typename T2>
		T2 subtract(T a,T b){
			cout<<"The difference is "<<a-b<<endl;
		}
		template<typename T3>
		T3 product(T a,T b){
			cout<<"The product is "<<a*b<<endl;
		}
};
int main(){
	calculate <int>cal;
	cal.add<int>(2,4);
	cal.subtract<float>(4,1);
	cal.product<int>(2,3);
}
