#include <iostream>
using namespace std;

int Swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;

}
int main(){
    int a,b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b;
}