//a program to sort array using bubble sort in templates
#include<iostream>
using namespace std;
template<typename T>
T sort(T arr[],int x){
	int i,j;
	T temp=arr[0];
	for(i=0;i<x-1;i++){
		for(j=i;j<x-1;j++){
			if(arr[j]<arr[i]){
				arr[j]=temp;
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
}
int main(){
	int l1,i;
	cout<<"Enter number of elements in the array"<<endl;
	cin>>l1;
	int int_arr[l1];
	for(i=0;i<l1;i++){
		cin>>int_arr[i];
	}
	sort(int_arr,l1);
	cout<<"Result "<<endl;
	for(i=0;i<l1;i++){
		cout<<" "<<int_arr[i]<<" "<<endl;
	}
}
