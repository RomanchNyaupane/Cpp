#include<iostream>
using namespace std;
class c1{
	private:
		string name;
		int roll;
	public:
		c1(string str, int rollno){
			name=str;
			roll=rollno;
			
		}
		void out(void){
			cout<<name<<roll;
		}
};
int main(){
	string str;
	c1 class1("romach",48);
	c1 class2("Rakshya",24);
//	c1 class3(class1);
	c1 class3=class1;
	class3.out();
}
