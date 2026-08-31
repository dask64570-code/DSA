#include <iostream>
#include <climits>
using namespace std;

int main(){
    int i, ans = INT_MIN;
    int arr[5] = {4,76,12,4,87};
    // Find first max
    for(i = 0; i < 5; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    cout << "First Max: " << ans << endl;
    int FirstMax = ans;
    int SecondMax = INT_MIN;
    // Find second max
    for(i = 0; i < 5; i++){
        if(arr[i] != FirstMax && arr[i] > SecondMax){
            SecondMax = arr[i];
        }
    }
    cout << "Second Max: " << SecondMax << endl;
    return 0;
}