#include<iostream>
using namespace std;
class masterClass{
	public:
		int a=4;								//						masterClass
};												//							|
class classA:public masterClass{				//			----------------------------------
	public:										//			|								|
		int x=5;								//		classA							classB
};												//			|_____________________________|
class classB:public masterClass{				//							|
	public:										//						classC
		int y=6;								//
};												//
class classC:public classA,public classB{		//
	public:										//
		int b=7;								//
};
int main(){	
	classC c3;
	cout<<c3.b;
}
