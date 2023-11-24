//bubble sort algorithm second attempt
#include<iostream>
using namespace std;
template<typename T>
T sort(T arr[],int x){
	int i,j;T temp;
	for(i=0;i<x;i++){
		for(j=i+1;j<x;j++){
			if(arr[j]<arr[i]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main(){
	int l1,i;
	cout<<"Enter length of array"<<endl;
	cin>>l1;
	int int_arr[l1];
	cout<<"Enter array"<<endl;
	for(i=0;i<l1;i++){
		cin>>int_arr[i];
	}
	sort(int_arr,l1);
	cout<<"Result";
	for(i=0;i<l1;i++){
		cout<<int_arr[i];
	}
}
