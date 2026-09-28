#include <iostream>
#include <string>
using namespace std;

int FactOfInt(const string &s){
    int product = 1;
    for(size_t index = 0; index < s.size(); index++){
        if(s[index] < '0' || s[index] > '9'){
            cout << "Invalid character in input!" << endl;
            return -1; // or handle error however you like
        }
        int digit = s[index] - '0';
        if(digit == 0){
            return 0;
        }
        product *= digit;
    }
    return product;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Result: " << FactOfInt(s) << endl;
    return 0;
}