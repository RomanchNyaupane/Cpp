#include<iostream>
using namespace std;
class c1{
	private:
		int a=5,b=1,c;
	public:
		void show(void){
			cout<<a<<endl;
		}
		friend c1 operator << (c1,c1);
};
c1 c1::operator <<(c1 sample1){
	c1 temp;
	temp.c=sample1.a>>sample1.b;
}
int main(){
	c1 class1,class2;
	class2<<class1;
}
