#include <iostream>
using namespace std;

int main(){
    //a program to add two numbers
    int firstNumber, secondNumber, sum;
    //cout and cin is used to display and accept output
    cout<<"enter two numbers to add :";
    cin>>firstNumber>>secondNumber;
    sum = firstNumber+secondNumber;
    cout<<sum;
    return 0;
}

/*
keywords - certain words that are reserved i.e. predefined for some operation and cannot be used as variable. ex. int(it is only for declaration(integer specfically))
identifier - names given for program elements like variables, constants, arrays, class, objects, functions.
datatypes - they determine the format of a variable. eg. int, float, char, class.
variable - they are mechanism for storing data in memory location.
constant - 
operator - they are mathemat
expression - it is combination of variables and operators
statement - combination of expressions and 
reference variable - 
*/
/*
the keywords are not available for re-definition and overloading
what is keyword overloading??

identifier is arbitarily long sequence of digits, underscores,lowercase and uppercase letters, latin letters and most UNICODE character. 
unicode character - letters and characters identified by computers is called unicode character. nepali language encoding in a computer.ex. if nepali unicode is not installed then we cannot understand nepali sentence on a computer screen. 
identifiers are used for naming of elements like objects, namespace
a valid identifier must begin with non digit character
eg. 1var-invalid _1var-valid var1-valid
identifiers are case sensitive
keywords cannot be used as identifier
the identifiers with double underscore are called reservid identifiers _For is wrong _for is correct
the identifier that begin with undefscore followed by uppercase character are reserved

*/
/*
void-it denotes nothing
void func(int a)-returns nothing

FUNDAMENTAL Datatypes
Boolean type - can only represent two values: 0 or 1, true or false, on or off.
they are used to evaluate boolean expression


integer type: an store a whole number value such as 7, 190,12 etc..
it exists in variety of sizes
signed integer: supports negative values
signed char
signed short int
signed int
signed long int
signed long long int

unsigned: does not suppprt negative values
unsigned char
insigned short int
unsigned int
unsigned long int
unsigned long long int

character type: it can represent single character such as A or $
the most basic type is char, which is one byte character
other types are also provided for wider character - to represent unicodes and complex
char
char15_t
cha32_t
wchar_t

floating types : they ca  represent decimal type
IEEE-754 32
IEEE-754 64
float--single precision
double--double precision
long double--extended precision

COMPOUND Datatypes
1.array
2.reference
3.pointer
4.function
5.class
6.enumeration

array
allows to store multiple pieces of information of same type
the values are stored in continuous memory location
*/