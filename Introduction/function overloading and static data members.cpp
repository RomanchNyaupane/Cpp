/*#include<iostream>
using namespace std;
class employee_data{
	private:
		int id;
		static int count;
	public:
		void entry(void){
			++count;
			cout<<"Enter id of employee number "<<count<<" ";
			cin>>id;
		}
		void collected_data(void){
			cout<<endl<<"id is "<<id<<" for employee number "<<count<<endl;
		}
};
int employee_data::count;
int main(){
	employee_data emp1,emp2,emp3;
	emp1.entry();
	emp1.collected_data();
	
	emp2.entry();
	emp2.collected_data();
	
	emp3.entry();
	emp3.collected_data();
}
*/

//lets try using static member function in the given code
#include<iostream>
using namespace std;
class employee_data{
	private:
		int id;
		static int count;
	public:
		void entry(void){
			++count;
			cout<<"Enter id of employee number "<<count<<" ";
			cin>>id;
		}
		static void collected_data(void){
			cout<<endl<<"id for employee "<<count<<endl;
		}
};
int employee_data::count;
int main(){
	employee_data emp1,emp2,emp3;
	emp1.entry();
	employee_data::collected_data();
	
	emp2.entry();
	employee_data::collected_data();
	
	emp3.entry();
	employee_data::collected_data();
}
