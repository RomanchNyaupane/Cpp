//comparing distances
#include<iostream>
#include<math.h>
using namespace std;
class dist{
	private:
		int int_part;
		float float_part;
	public:
		void getdata(void){
			int temp;
			cout<<"enter total distance(include decimals if exist) ";
			cin>>temp;
			int_part=floor(temp);
			float_part=temp-int_part;
		}
		void operator>(dist temp){
			if(((this->int_part)+(this->float_part))>(temp.int_part+temp.float_part)){
				cout<<"true";
			}
			else
			cout<<"false";
		}
};
int main(){
	dist d1,d2;
	d1.getdata();
	d2.getdata();
	d1>d2;
}
