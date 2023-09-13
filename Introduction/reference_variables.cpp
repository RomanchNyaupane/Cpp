//lets write a program using reference variables
// #include<iostream>
// using namespace std;
// class class1{       //class class1 means that we just created an abstract data whose data type is class1
//     private:
//     int income;
//     int expense;
//     int savings;
//     public:
//     void income_manager();
//     void input(int a,int b){
//     	income=a;
//     	expense=b;
// 	}
// };
// void class1::income_manager(){
// 	cout<<"Savings:"<<income-expense<<endl;
// }
// int main(){
// 	class1 c1;		//just like declaring int a, we declared class1 c1. variable name is c1 and datatype is class1.
// 	int a,b;
// 	cout<<"Enter values of a and b";
// 	cin>>a>>b;
// 	c1.input(a,b);
// 	c1.income_manager();
// }

//now do above program using reference variables
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	cout<<a<<" "<<b<<endl;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
}
