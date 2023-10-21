#include<iostream>
using namespace std;
class c1{
	private:
		int a;
	public:
		c1(int a){
			this->a=a;
		}
		friend c1 operator++(c1);
};
c1 operator++(c1 temp){
	temp.a++;
}
int main(){
	c1 class1(2);
	++class1;
}
