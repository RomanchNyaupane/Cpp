//this is example of function templates
#include<iostream>
using namespace std;
template<typename P,typename Q>		//now we can use two different datatypes on a single function
P display(P a,Q b){					//for the sake of this program, let P represent float and Q is int
	return a/b;
}
int main(){
	cout<<display<float,int>(5,2);
}
