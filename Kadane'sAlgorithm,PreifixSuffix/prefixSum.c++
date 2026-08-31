//! normal method
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[6]={6,4,5,-3,2,8};

//     int sum=0;

//     for(int i =0;i<6;i++){
//         sum=sum+arr[i];
//         cout<< sum << " ";
//     }
//     return 0;
// }

// using vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {6, 4, 5, -3, 2, 8};

    int n = arr.size();

    vector<int> prefix(n);

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
        cout << prefix[i] << " "; 
    }


    return 0;
}