//how to use destructors??
#include<iostream>
using namespace std;
class AN225{
	private:
		int a,b;
	public:
		AN225(){
			cout<<"This is constructor"<<endl;
		}
		~AN225(){									//this destructor is called just before main function is destroyed. to understand destructor more clearly, see destructors2.cpp
			cout<<"Destructor is invoked"<<endl;
		}
};
int main(){
	AN225 mriya;
}
