//exception handling
#include<iostream>
using namespace std;
int main(){
	int a=5;
	int b=0;
	try{
		cout<<"Hi! this is try block"<<endl;
		if(b==0){
			cout<<"hi i threw exception for catch() to catch.";
			throw "there is an exception";
		}
	}
	catch(const char* str){
		cout<<endl<<"Error: "<<endl<<str;
	}
}
