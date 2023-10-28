//friend functions
//they are the functions that can access all the data either private or public of a class
#include<iostream>
using namespace std;
class frend{
	private:
		string name;
		int roll_no;
		static int id;
	public:
		frend(){
			id=5;			//this helps to initialise value of static int that we considered above. after declaring this, the initial value of 'id' wont be zero
		}
		frend(string name,int roll_no){
			this->name=name;
			this->roll_no=roll_no;
			id++;
		}
		friend void access(frend);
};
void access(frend temp){
	cout<<temp.id<<" "<<temp.name<<" "<<temp.roll_no<<" "<<endl;
}
int frend::id;
int main(){
	frend fr;
	frend fr1("bikram",7);
	access(fr1);
	frend fr2("romanch",48);
	frend fr3("ronith",26);
	frend fr4("sajan",15);
	access(fr1);
}
