/*#include<iostream>
using namespace std;
void area(float,int);
void area(float);
int main(){
	float length1;
	int length2;
	cin>>length1>>length2;
	area(length1,length2);
	area(length1);
}
void area(float length1,int length2){
	cout<<"rectangle "<<length1*length2;
}
void area(float length1){
	cout<<"circle"<<3.14*length1*length1;
}*/

//constructor overloading
#include<iostream>
using namespace std;
class c1{
	private:
		int a,b;
	public:
		c1(int c,int d){
			a=c;b=d;
			cout<<"\na="<<a<<endl<<"b="<<b;
		}
		c1(int c){
			a=c;
			cout<<"\na="<<a<<endl;
		}
};
int main(){
	c1 obj1(1,2);
	c1 obj2(1);
}
