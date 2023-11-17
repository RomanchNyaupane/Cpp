#include<iostream>
using namespace std;
int div(double x,double y){
	cout<<"inside div block "<<endl;
	try{
		if(y==0){
			throw y;
		}
	}
	catch(double){
		cout<<"There is an exception: ";
		throw;
	}
}
int main(){
	int a,b;
	try{
		div(2.0,20);
		div(1,0);
	}
	catch(double){
		cout<<"caught it"<<endl;
	}
	cout<<"End of main";
}
