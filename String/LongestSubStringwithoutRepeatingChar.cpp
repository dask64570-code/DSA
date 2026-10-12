#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ! first method
// int LongestSubstring(string s) {
//     vector<char> current;
//     int maxLen = 0;

//     for (char ch : S) {
//         auto it = find(current.begin(), current.end(), ch);

//         if (it != current.end()) {
//             current.erase(current.begin(), it + 1);
//         }

//         current.push_back(ch);
//         maxLen = max(maxLen, (int)current.size());
//     }

//     return maxLen;
// }

// int main() {
//     string s;
//     cout << "Enter the string: ";
//     getline(cin, s);

//     cout << "Longest substring length: " << LongestSubstring(s) << endl;
//     return 0;
// }

// !Second method
int LongestSubstring(string s){
    vector<bool> count(256,0);
    int first = 0, second =0, len=0;
    while(second < s.size()){
        while(count[s[second]]){
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        len=max(len,second - first+1);
        second++;
    }
    return len;
}
int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    cout << "Longest substring length: " << LongestSubstring(s) << endl;
    return 0;
}
