#include<iostream>
using namespace std;
class parent_ho_hai{
	private:
		string name;
		int roll;
	protected:
		string namea;
		int rolla;
	public:
		string nameaa;
		int rollaa;
		parent_ho_hai(){
			name="romanch";
			roll=48;
			namea="romancha";
			rolla=488;
			nameaa="romanchaa";
			rollaa=4888;
		}
};
class child_ho_hai:public parent_ho_hai{
	public:
		void show(void){
			cout<<nameaa<<" "<<rolla<<endl;
		}
};
int main(){
	child_ho_hai ch;
	ch.show();
}
