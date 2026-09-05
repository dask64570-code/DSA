#include <iostream>
#include <string>
using namespace std;

bool CheckPangram(string &s){
    bool seen[26] = {false};
    int index = 0;

    while(index < s.size()){
        char ch = tolower(s[index]);
        if(ch >= 'a' && ch <= 'z'){
            seen[ch - 'a'] = true;
        }
        index++;
    }

    for(int i = 0; i < 26; i++){
        if(seen[i]==0){
            return false;
        }
    }

    return true;
}

int main(){
    string str;
    cout << "enter the sentence: ";
    getline(cin, str);

    if(CheckPangram(str)){
        cout << "Pangram" << endl;
    } else {
        cout << "Not a Pangram" << endl;
    }

    return 0;
}