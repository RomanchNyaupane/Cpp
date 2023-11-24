#include<iostream>
using namespace std;
int main(){
	int a=5,b=6;
	swap<int>(a,b);
	cout<<a<<" "<<b<<endl;
}
template <typename typ>
void swap(typ x,typ y){
	typ temp;
	temp=x;
	x=y;
	y=temp;
}
