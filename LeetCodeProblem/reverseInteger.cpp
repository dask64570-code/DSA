#include <iostream>
using namespace std;
int main(){
    int a ,b,c;
    int store;
    cout<<"enter the num a  b  c:";
    cin>>a>>b>>c;
    cout<<"the entered numbers are:"<<a <<b <<c;
    cout<<endl;
    store =c;
    //* now c will be empty
    c=a;
    //* now a will be empty
    a=store;

    // *store is empty and numbers are reshuffled
    cout<<"the reverse numbers are:"<<a <<b <<c;

}