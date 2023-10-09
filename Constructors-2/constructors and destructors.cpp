#include<iostream>
using namespace std;
class parent{
    public:
    int x,y;
    void show(void){
        cout<<"x is "<<x<<endl<<"y is "<<y<<endl;
    }
    parent(){ 												//default constructor
        cout<<"this is default constructor executed "<<endl;
    }              
    parent(int x,int y){									//parameterized constructor
        this->x=x;this->y=y;
        cout<<"paremeterized constructor is executed"<<endl;
        cout<<"values set by parameterized constructor x="<<x<<" y= "<<y<<endl;
    }
    parent(parent &sample){									//copy constructor
        x=sample.x;
        y=sample.y;
        cout<<"copy constructor executed "<<endl;
        cout<<"values set by copy constructor x="<<x<<" y= "<<y<<endl;
    }
};
int main(){
    parent p1,p2(2,3),p3(p2);
    //lets use destructors
    //destructors never take an argument nor returns any value
}
