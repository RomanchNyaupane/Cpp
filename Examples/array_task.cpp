#include <iostream>
using namespace std;
int main(){
    int z;
    cout<<"Enter the size of array"<<endl;
    cin>>z;
    int a[z];
    int i;
    for(i=0;i<z;i++){
        cout<<"enter element number "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"you entered:"<<endl;
    for(i=0;i<z;i++){
        cout<<a[i]<<endl;
    }
}