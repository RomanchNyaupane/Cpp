//using friend functions to add to data members of different objects
#include<iostream>
using namespace std;
class car{
	private:
		int engine_hp,fuel_eff,weight,cost;
	public:
		car(){}
		car(int engine_hp,int fuel_eff,int weight,int cost){
			this->engine_hp=engine_hp;
			this->fuel_eff=fuel_eff;
			this->weight=weight;
			this->cost=cost;
		}
		friend void dealer(car,car);
};
void dealer(car lambo,car ferrari){
	cout<<"Total power output "<<lambo.engine_hp+ferrari.engine_hp<<endl;
	cout<<"Total fuel consumption "<<lambo.fuel_eff+ferrari.fuel_eff<<endl;
	cout<<"Total weight "<<lambo.weight+ferrari.weight<<endl;
	cout<<"Total cost "<<lambo.cost+ferrari.cost<<endl;
}
int main(){
	car lamborghini(600,20,1000,500000);
	car ferrari(597,24,1050,600000);
	dealer(lamborghini,ferrari);
}
