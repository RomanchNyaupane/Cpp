//array on pointers
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int num[]={1,2,3,4,5,6};
	int *ptr;
	ptr= &num[4];
	cout<<ptr<<endl;
	for(int i=0; i<6;i++){
		cout<<num[i]<<endl;
	}
	cout<< ptr<<endl;
	cout<<&num[4]<<endl;
}
