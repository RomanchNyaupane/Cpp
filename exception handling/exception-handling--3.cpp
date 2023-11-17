#include<iostream>
using namespace std;
int main(){
	double val1,val2,val3;
	try{
		cout<<"Enter val1 ";
		cin>>val1;
		cout<<"Enter val2 ";
		cin>>val2;
		val3=val2/val2;
		if(val2==0){
			throw "cannot divide by zero";
		}
	}
	catch(const char *a){
		cout<<"Error "<<a;s
	}
}
