//default constructors are those constructors that contain no argument or parameters even if it contains the parameters, the parameters have default values
#include<iostream>
using namespace std;
class parent{
	private:
		int x;
		string str;
};
int main(){
	parent p;
	cout<<endl<<p.x;
}
