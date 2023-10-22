//to solve the diamond problem, we use virtual keyword. remove the virtual in below program to see ambiguity that exists

#include<iostream>
using namespace std;
class person{
	public:
		string name="romanch";
		int age=21;
	public:
		
};
class teacher:  public person{
	private:
		string post="professer";
	public:
		
	
};
class student:  public person{
	private:
		int semeser=5;
	public:
		
		
};
class department_management:public teacher,public student{
	public:
		int a=1;
};

int main(){
	department_management dm1;
	cout<<dm1.age;
}
