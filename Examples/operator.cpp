//program to find if a given number is palindrome or not
#include <iostream>
using namespace std;
int main(){
    int n,num,digit,reverse=0;
    cout<<"enter a number";
    cin>>n;
    num=n;
    do{
        digit=n%10;
        reverse = (reverse*10) +digit;
        n=n/10;
    }while(n!=0);
    cout<<"the reverse of a number is"<<reverse<<endl;
    if(num==reverse){
        cout<<"the number is a palindrome!";
    }
    else
    cout<<"the number is not palindrome";
}