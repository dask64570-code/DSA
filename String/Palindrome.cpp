#include <iostream>
#include <string>
using namespace std;

int main(){
    string s="nayan";
    int start=0,end=s.size()-1;
    while(start<end){
        if(s[start] != s[end]){
            cout<<"not a Palindrome";
            return 0;
        }
        start++,end--;
    }
    cout<<"it is a Palindrome";
    return 0;
}