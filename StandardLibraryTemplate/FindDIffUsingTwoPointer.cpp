#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr = {5,10,3,2,50,80};

    int n = arr.size();

    int start = 0, end = 1;
    int target = 45;

    sort(arr.begin(), arr.end());

    while (end < n) {
        int diff = arr[end] - arr[start];

        if (diff == target) {
            cout << arr[start] << " " << arr[end]
                 << " Diff:" << diff << endl;
            break;
        }
        else if (diff < target) {
            end++;
        }
        else {
            start++;

            if (start == end)
                end++;
        }
    }

    return 0;
}