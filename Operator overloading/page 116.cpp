//identify the error
#include<iostream>
class Space{
	int mCount;
	public:
		Space(){
			mCount=0;
		}
		Space operator ++(){
			mCount++;
			return Space(mCount);		//a function is called on written which is okay but the fuction is a constructor which is parameterized. but in our definition of constructor above, there is no parameter. so this is one error
		}								//this function should return Space datatype value, not int or float
};
void main(){							//main cannot be void
	Space objSpace;
	objSpace++;							//instead of objSpace++ it should be ++objSpace
}
