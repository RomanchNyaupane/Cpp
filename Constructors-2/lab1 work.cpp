/*
Define a class, Vector, which represents either a column vector or a row vector. A
column (row) vector is a matrix consisting of a single column (row) of m elements.
Let m = 3 in this program. (Use three member variables instead of an array.)
Use appropriate constructors and destructor.
Implement the following method:
Vector add(Vector)	// Adds the input vector with the calling vector
*/
#include<iostream>
using namespace std;
class Vector{
	private:
		int a,b,c;
	public:
		Vector(int x,int y,int z){
			a=x;b=y;c=z;
		}
		~Vector(){
		}
		Vector add(Vector sample){
			a=a+sample.a;
			b=b+sample.b;
			c=c+sample.c;
		}
		void show(void){
			cout<<"a= "<<a<<" b= "<<b<<" c= "<<c<<endl;
		}
};
int main(){
	{
	Vector v1(1,2,3);
	Vector v2(4,5,6);
	v1.add(v2);
	cout<<"the input vector v2 is added with calling vector v1 "<<endl;
	cout<<"the new values are ";
	v1.show();
	cout<<"now this block is exited and the v1 and v2 will be deleted";
	}
	
}

//saugat ek choti v1.show(); yeslai last line ma paste gara ani magic hera. v1 delete vaisakyo so access nai garna mildaina
