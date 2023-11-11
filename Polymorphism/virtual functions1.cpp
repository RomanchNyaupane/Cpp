#include<iostream>
using namespace std;
class shape{
	public:
		int curve;
		virtual void draw(){
			cout<<"a shape is drawn ";
		}
};
class triangle:public shape{
	public:
		int curve=5;
		void draw(){
			cout<<"Triangle is drawn "<<endl;
		}
};
class rectangle:public shape{
	public:
		int curve=7;
		void draw(){
			cout<<"Rectangle is drawn "<<endl;
		}
};
class circle:public shape{
	public:
		int curve=9;
		void draw(){
			cout<<"Circle is drawn "<<endl;
		}
};
int main(){
	shape s,*ptr_s;
	triangle t;
	rectangle r;
	circle c;

	ptr_s=&t;
	ptr_s->draw();
}
