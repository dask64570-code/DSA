#include <iostream>
#include <string>
using namespace std;

int LongestPreSuff(string s) {
    string result1 = "";
    string result2 = "";
    int size = 0;
    int n = s.size();

    for (int i = 0; i < n - 1; i++) {

        result1 += s[i];

        result2 = "";

        for (int j = n - i - 1; j < n; j++) {
            result2 += s[j];
        }

        if (result1 == result2) {
            size = result1.size();
        }
    }

    return size;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Longest Prefix Suffix length: " << LongestPreSuff(s);

    return 0;
}