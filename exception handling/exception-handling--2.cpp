#include<iostream>
using namespace std;
int main(){
	int age,roll_no;
	cout<<"Enter roll no.: ";
	cin>>roll_no;
	cout<<"Enter age: ";
	cin>>age;
	try{
		if(age<=0){
			throw "age cannot be zero";
		}
		cout<<"age to roll no. ratio: ";
	}
	catch(const char* a){
		cout<<"Error: "<<a;
	}
}
