#include<iostream>
using namespace std;
int main(){
	int a=3,b=0;
	try{
		int age=a/b;
		if(b==0){
			throw 10;
		}
		cout<<"answer "<<endl;
	}
	catch (int a){
		cout<<"error: "<<a<<endl;
	}
	return 0;
}
