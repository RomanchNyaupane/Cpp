#include<iostream>
using namespace std;
int main(){
	int a,b,z;
	string c="oops! exception";
	string d="exception occoured";
	try{
		cout<<"Enter numerator ";
		cin>>a;
		cout<<"Enter denominator: ";
		cin>>b;
		cout<<"Enter extra factor: ";
		cin>>z;
		if(z==0){
			throw;
		}
		cout<<"Hi!! from the middle of exceptions"<<endl;
		if(b==0){
			throw c;
		}
	}
	catch(string d){
		cout<<d;
	}
	catch(string e){
		cout<<e;
	}
}
