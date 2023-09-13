/*
What are constructors and why use them?
-constructors are special member functions that are used to initialise data members of a class
-constructors are automatically called whenever an object is created.

Difference between normal functions and constructors:
1.the name of constructor is same as name of class
2.they have input arguments 
3.they do not have return type
4.it is automatically called whenever a class is created
5.it must be placed in public section of class
6.If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body)

types of constructor:
1.default constructor
2.paremeterized constructor
3.copy constructor
*/


//1.Default constructor
// #include<iostream>
// using namespace std;
// class student{
//     private:
//     string name;
//     int roll;
//     int birth_yr;
//     int total_mark;
//     public:
//     float percentage();
//     student(){           //default constructor
//         name="romanch";
//         roll=48;
//         birth_yr=2003;
//         total_mark=200;
//     }
// };
// float student::percentage(){
//     return (float(total_mark)/600)*100;
// }
// int main(){
//     student s1;
//     cout<<"percentage"<<s1.percentage();
//     return 0;
// }

//2.parameterized constructor
// #include<iostream>
// using namespace std;
// class marker{
//     private:
//     string name;
//     string company;
//     public:
//     //parameterized constructor
//     void setName(string a, string b){
//         name=a;
//         company=b;
//         cout<<endl<<"name "<<name<<endl<<"company "<<company<<endl;
//     }
// };
// int main(){
//     marker m1;
//     m1.setName("snowman m1","snowman inc.");
//     marker m2;
//     m2.setName("snowman m2","snowman inc.");
// }


//3.copy constructor
// #include<iostream>
// using namespace std;
// class copy_conc{
//     private:
//     int phone_number;
//     int id_number;
//     public:
//     void name(){
//         cout<<phone_number<<endl;
//         cout<<id_number<<endl<<endl;
//     }
//     copy_conc(int a, int b){
//         phone_number=a;
//         id_number=b;
//     }
// };
// int main(){
//     copy_conc c1{123,456};
//     c1.name();
//     //to copy
//     copy_conc c2 = copy_conc(101112,131415);
//     c2.name();
    
//     //another way
//     copy_conc c3(c1);
//     c3.name();
//     return 0;
// }
