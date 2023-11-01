//pointer to objects
#include<iostream>
using namespace std;
class item{
	public:
		int a=1,b=2,c=3;
		string str1="romanch",str2=" nyaupane";
};
int main(){
	item x;
	item *ptr;
	ptr=&x;
	cout<<(*ptr).a<<endl;
	cout<<ptr->a;
}
