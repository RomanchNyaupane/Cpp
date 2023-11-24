//a program to add each two values of three different data types
#include<iostream>
#include<string.h>
using namespace std;
template<typename P>
void addition(P p,P q){
	cout<<"The sum is "<<p+q<<endl;
}
int main(){
	addition<int>(2,2);
	addition<float>(2.5,3.5);
	addition<string>("romanch ","nyaupane");
}
