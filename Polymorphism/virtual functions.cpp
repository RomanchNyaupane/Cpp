#include<iostream>
using namespace std;
class parent{
	public:
		int a=1,b=2,c=3;
		void show(){
			cout<<a<<" "<<b<<endl;
		}
};
class child:public parent{
	public:
		int d=4;
		void show(){
			cout<<d<<endl;
		}
		void k_ko_show(){
			cout<<d<<endl;
		}
};
int main(){
	/*
	child c1,*ptr1;		//----|
	parent p1,*ptr2;	//----|_________ run program with these four lines of code in main function to understand a scenario
	ptr2=&c1;			//----|
	ptr2->show();		//----|
	*/
}
