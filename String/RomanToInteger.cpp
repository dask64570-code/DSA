#include <iostream>
#include <string>
using namespace std;

int SUM(char c){
    if(c=='I')
    return 1;
    if(c=='V')
    return 5;
    if(c=='X')
    return 10;
    if(c=='L')
    return 50;
    if(c=='C')
    return 100;
    if(c=='D')
    return 500;
    if(c=='M')
    return 1000;
}

int IntegerToRoman(string &s){
    int sum=0,index=0;
    while(index<s.size()-1){
        if(SUM(s[index])<SUM(s[index+1])){
            sum-=SUM(s[index]);
        }else{
            sum+=SUM(s[index]);
        }
        index++;
    }
    sum+=SUM(s[index]);
    return sum;
}
int main(){
    string s;
    cout<<"enter the Roman number: ";
    cin>>s;

    IntegerToRoman(s);
    return 0;
}