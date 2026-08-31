#include <iostream>
using namespace std;

bool PRIME(int n){
    if(n<2)
    return 0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }else{
            return 1;
        }
    }
}
int FACT(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a,b;
    cout<<"enter the num a and  b:";
    cin>>a>>b;
    // cout<<"prime for a:"<<PRIME(a)<<endl;
    // cout<<"fcat for b:"<<FACT(b)<<endl;
    // cout<<"prime for b:"<<PRIME(b)<<endl;
    // cout<<"fact for a:"<<FACT(a)<<endl;
    // cout<<"prime for b-a:"<<PRIME(a-b)<<endl;
    // cout<<"fcat for b-a:"<<FACT(a-b)<<endl;
}