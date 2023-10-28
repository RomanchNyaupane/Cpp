//in this program, we will see how to use member functions as friend function
//member function of one class can be friend function of another class
#include<iostream>
using namespace std;
class c1;
class c2;		//both of these class are declared by forward declaration method
class c1{
	private:
		int x,y,z;
	public:
		void mem_func_1(c2);		//we passed a c2 class because we want to this member function to be a friend function of class c2 
		void mem_func_2(void){
			cout<<"New to c++"<<endl;
		}
};
class c2{
	private:
		//kei xaina vanya k herya
		string a="K baula jasto kaam garna lagya";
	public:
		friend void c1 ::mem_func_1(c2);
};
void c1 :: mem_func_1(c2 sample){
	cout<<"output : "<<sample.a;
}
int main(){
	c1 class1;
	c2 class2;
	class1.mem_func_1(class2);
}
