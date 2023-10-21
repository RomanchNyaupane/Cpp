//overloading input output operator

#include<iostream>
using namespace std;
class c1{
	private:
		int a=10,b=1,c;
	public:
		c1 operator >> (c1);
		void show(void){
			cout<<"answer "<<c;
		}
};
c1 c1::operator >>(c1 sample){
	c1 temp;
	temp.c=a>>sample.b;
	return temp;
}
int main(){
	c1 class1,class2,class3;
	class3=class1>>class2;
	class3.show();
}

/*
//lets do above program by using friend function
#include<iostream>
using namespace std;
class c1{
	private:
		int a=10,b=1,c;
	public:
		friend c1 operator >> (c1 sample1, c1 sample2){
			c1 temp;
			temp.c=sample1.a>>sample2.b;
			return temp;
		}
		void show(void){
			cout<<"answer "<<c;
		}
};
int main(){
	c1 class1,class2,class3;
	class3=class1>>class2;
	class3.show();
}
*/
