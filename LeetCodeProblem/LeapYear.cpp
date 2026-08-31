#include <iostream>
using namespace std;
int main(){
    int Year;
    cout<<"entre the Year:";
    cin>>Year;
    // if(Year%4==0 && Year%100 != 0){
    //     cout<<"it is a leap year";
    // }else if(Year%100==0 && Year%400 == 0) {
    //     cout<<"it is a lepa year";
    if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) {
        cout << "it is a leap year";
    }else{
        cout<<"it is not";
    }
}