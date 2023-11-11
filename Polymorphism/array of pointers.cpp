//array of pointers
#include<iostream>
using namespace std;
int main(){
	int arr[5]={2,3,4,5,6};
	int *ptr[5],i;
	for(i=0;i<5;i++){
		ptr[i]=&arr[i];
	}
	for(i=0;i<5;i++){
		cout<<ptr[i]<<" "<<*ptr[i]<<endl;
	}
}
