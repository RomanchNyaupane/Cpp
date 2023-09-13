//difference between procedural and object orientated programming
//programming paradigm is classification of programming language based on their characteristics

/*procedure orientated language is a programming paradiagm that is based on subroutines or procedures claas known as functions
features of pop
-modularity
-predefined functions
-scoping
-parameter passing(pass by value of adress)
-libraries

advantages
-portable
-general-purpose programming(any type of program can be written)
-functions
-flow tracking

disadvanteges
-on large scale app developement precedural programming code is not very usable
-not suitable for  data sensitive program
-no auto memory management

*/

//oop
/*
it is a way of programming which is based on the ideas of objects to represent data and methods

object is a real world entities like pen,book or animal that has some state or behaviour
class is collection of objects or blueprints of object defining the common attributes and behaviour
a class does not take any memory space

class is a user defined data datatypes that holds data member and member function


*/
#include<iostream>
using namespace std;
class Romanch{
    public:
    string name="Romanch";
    int age = 2;
    void printName(){
        cout<<endl<<"Kathmandu University"<<endl;
    }
};
int main(){
    Romanch nyau;
}