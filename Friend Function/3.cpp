//in this program, we will overload operator with friend function
//first lets overload an operator without friend function
/*
#include<iostream>
using namespace std;
class c1{
	private:
		string name="Romanch";
		string sur_naam=" Nyaupane";
		string concat;
	public:
		c1 operator + (c1 sur_name){
			c1 temp;
			temp.concat = name+sur_name.sur_naam;
			return temp;
			}
		void out(){
			cout<<concat;
		}
};
int main(){
	c1 naam,sur_name,concat;
	concat=naam+sur_name;
	concat.out();
}
*/

//now lets overload the same operator with friend function
#include<iostream>
using namespace std;
class c1{
	private:
		string a="Romanch";
		string b=" Nyaupane";
		string concat;
	public:
		friend c1 operator + (c1,c1);
		void show(){
			cout<<"Result: "<<concat<<endl;
		}
};
c1 c1::operator + (c1 class1,c1 class2){
	c1 temp;
	temp.concat=class1.a+class2.b;
	return temp;
}
int main(){
	c1 class1,class2,class3;
	class3=class1+class2;
	class3.show();
}
