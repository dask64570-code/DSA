#include <iostream>
#include <string>
#include <vector>
using namespace std;

string SortSentence(string &s) {

    vector<string> ans(10);

    int index = 0;
    string temp;

    while (index < s.size()) {

        if (s[index] == ' ') {
            int POS = temp.back() - '0';
            temp.pop_back();
            ans[POS] = temp;
            temp.clear();
            index++;
        }
        else {
            temp += s[index];
            index++;
        }
    }
    if (!temp.empty()) {

        int POS = temp.back() - '0';

        temp.pop_back();

        ans[POS] = temp;
    }
    string result;
    for (int i = 1; i < ans.size(); i++) {
        if (!ans[i].empty()) {
            result += ans[i] + " ";
        }
    }
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {

    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    cout << SortSentence(s);

    return 0;
}