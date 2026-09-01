#include <iostream>
#include <string>
using namespace std;

void Defanging(string str){
    string result = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '.'){
            result += "[.]";
        }
        else{
            result += str[i];
        }
    }
    cout<<"\n";
    cout << result;
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<str;

    Defanging(str);
}