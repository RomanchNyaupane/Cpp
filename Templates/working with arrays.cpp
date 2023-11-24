//using function template, write a c++ program to print maximum value from both integer using array and float array.
//your program should be user interactive
#include<iostream>
using namespace std;
template<typename T>
T maxvalue(T arr[],int x){
	int i=0;
	T min = arr[0];
	for(i=0;i<x;i++){
		if(arr[i]>min){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int l1,l2,i=0;
	cout<<"Enter length of integer array"<<endl;
	cin>>l1;
	cout<<"Enter length of float array"<<endl;
	cin>>l2;
	cout<<"Enter integer array"<<endl;
	int int_arr[l1];float flt_arr[l2];
	for(i=0;i<l1;i++){
		cin>>int_arr[i];
	}
	cout<<"Enter float array"<<endl;
	for(i=0;i<l2;i++){
		cin>>flt_arr[i];
	}
	cout<<"maximum value of int"<<maxvalue(int_arr,l1)<<endl;
	cout<<"maximum value of float"<<maxvalue(flt_arr,l2)<<endl;
	return 0;
}
