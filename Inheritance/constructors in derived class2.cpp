#include<iostream>
using namespace std;
class parent{
	protected:
		int a,b;
	public:
		parent(int x,int y){
			a=x;
			b=y;
		}
};
class child:public parent{
	public:
		int c,d;
		child(int a,int b,int c,int d);
};
child::child(int x,int y, int z,int w):parent(a,b){
	a=x;b=y;c=z;d=w;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;
}
int main(){
	child c1(1,2,3,6);
}
