#include <iostream>
#include <string>
using namespace std;

void StringRotateCLockwise(string &S){
    char c= S[S.size()-1];
    int index=S.size()-2;
    while(index>=0){
        S[index+1]=S[index];
        index--;
    }
    S[0]=c;
}

void StringRotateAntiCLockwise(string &S){
    char c= S[0];
    int index=1;
    while(index<S.size()){
        S[index-1]=S[index];
        index++;
    }
    S[S.size()-1]=c;
}

int main(){
    string str1,str2;
    cout<<"Enter the two string: ";
    cin>>str1>>str2;

    if(str1.size() != str2.size()){
        return 0;
    }
    string clockwise= str1;

    StringRotateCLockwise(clockwise);
    StringRotateCLockwise(clockwise);
    if(clockwise==str2){
        return 1;
    }

    string Anticlockwise= str1;
    StringRotateAntiCLockwise(Anticlockwise);
    StringRotateAntiCLockwise(Anticlockwise);
    if(Anticlockwise==str2){
        return 1;
    }

    return 0;
}