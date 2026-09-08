#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string SortVowel(string &s){
    string vowels;

    for(int i = 0; i < s.size(); i++) {
        if((s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' || s[i] == 'o' ||s[i] == 'u')||
        (s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' || s[i] == 'O' ||s[i] == 'U'))  
        {
            vowels += s[i];
        }
    }
    sort(vowels.begin(), vowels.end());

    int j = 0;

    for(int i = 0; i < s.size(); i++) {
        if((s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' || s[i] == 'o' ||s[i] == 'u')||
        (s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' || s[i] == 'O' ||s[i] == 'U'))  
        {
            s[i] = vowels[j];
            j++;
        }
    }
    return s;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    SortVowel(s);
    return 0;
}