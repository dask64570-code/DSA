#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int BigSum(vector<int> arr) {
    int maxi = INT_MIN;
    int prefix = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefix += arr[i];
        maxi = max(maxi, prefix);
        if (prefix < 0) {
            prefix = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the numbers";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<BigSum(arr);
}