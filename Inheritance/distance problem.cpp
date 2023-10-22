//distance wala problem solve vayo hai guys google baba ko help le
#include<iostream>
#include<math.h>
using namespace std;
class distance1{
	private:
		int meter;
		float centimeter;
	public:
		void get_dist(void){
			float temp;
			cout<<"Enter the distance: ";
			cin>>temp;
			meter=floor(temp);
			centimeter=(temp-meter)*100;
		}
		void show_dist(void){
			cout<<"The distance is "<<meter<<"m "<<centimeter<<"cm"<<endl;
		}
		distance1 operator+=(distance1 dist){
			distance1 temp;
			this->meter=meter+dist.meter;
			this->centimeter=centimeter+dist.centimeter;
			return temp;
		}
};
int main(){
	distance1 md1,md2;
	md1.get_dist();
	md2.get_dist();
	md1+=md2;
	md1.show_dist();
}










/*
distance1 operator+=(distance1 dist){
			distance1 temp;
			temp.meter=meter+dist.meter;
			temp.centimeter=centimeter+dist.centimeter;
			cout<<"output"<<dist.meter<<" "<<dist.centimeter<<endl;
			return temp;
		}
		
		
		
		friend void operator+=(distance1 temp1,distance1 temp2){
			temp1.meter=temp1.meter+temp2.centimeter;
			temp2.meter=temp2.meter+temp2.centimeter;
		}
*/








