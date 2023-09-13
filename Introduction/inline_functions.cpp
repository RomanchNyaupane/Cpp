// #include<iostream>
// using namespace std;
// class c1{
//     private:
//     int a,b,c;
//     public:
//     int input(int,int);
//     int addition(int, int);
// };
// int c1::addition(int a, int b){
//     return a+b;
// }
// int c1::input(int a, int b){
//     a=a;
//     b=b;
// }
// int main(){
//     c1 clas1;
//     clas1.input(3,3);
//     cout<<clas1.addition(2,2)<<endl;
// }

//lets do above program using functions
#include<iostream>
using namespace std;
void addition(int a,int b);
void subtraction(int a,int b);
void multiplication(int a,int b);
int main(){
    int a=5; int b=4;
    
    addition(a,b);
    subtraction(a,b);
    multiplication(a,b);
    return 0;
}
inline void addition(int a,int b){	//try compiling using and without using the inline function. the difference is clearly seen in compile time
    cout<<a+b<<endl;
    }
inline void subtraction(int a,int b){
	cout<<a-b<<endl;
}
inline void multiplication(int a,int b){
    cout<<a*b<<endl;
}
