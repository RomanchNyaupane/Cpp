#include<iostream>
using namespace std;
class boeing{
	private:
		int a,b;
	public:
		boeing();
		boeing(int x,int y){
			a=x;b=y;
		}
		~boeing(){
			cout<<"destroyed "<<endl;		//as soon as the 'func' is destroyed, the object that triggered the destructor becomes inaccessible either from main or 'func'
		}
		void show(void){
			cout<<a<<" hi! "<<b<<endl;
		}
};

void func(boeing &temp){
	temp.show();
}
int main(){
	boeing _747();
	boeing _767(2,3);
	func(_767);
}
