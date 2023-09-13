#include<iostream>
using namespace std;
int x=5;
int main(){
	int x=4;
	{
		int x=3;
		{
			int x=2;
			{
				int x=1;
			}
		}
		cout<<::x;
	}
}
