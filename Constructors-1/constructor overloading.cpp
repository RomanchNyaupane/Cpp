//constructor overloading
#include<iostream>
using namespace std;
class F35{
	private:
		int a,b,c;
	public:
		F35(int a,int b,int c){
			cout<<"3 arguments"<<endl;
		}
		F35(int a,int b){
			cout<<"2 arguments"<<endl;
		}
		F35(int a){
			cout<<"1 argument"<<endl;
		}
};
int main(){
	F35 f15(2);
	F35 blackbird(2,3,4);
	F35 mig29(9,8);
}
