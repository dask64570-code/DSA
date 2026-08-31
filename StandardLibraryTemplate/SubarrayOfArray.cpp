#include <iostream>
#include <vector>
using namespace std;
// ! two sub  array 
// int main(){
//     vector<int> arr={4,3,7,2};

//     for (int i = 0; i + 1 < arr.size(); i++) {
//         cout << "[" << arr[i] << ", " << arr[i + 1] << "]\n";
//     }

//     return 0;
// }

// !three sub array
// int main(){
//     vector<int> arr={4,3,7,2};

//     for (int i = 0; i + 2 < arr.size(); i++) {
//         cout << "[" << arr[i] << ", " << arr[i + 1] << ", "
//              << arr[i + 2] << "]\n";
//     }

//     return 0;
// }

// ! four sub array
int main(){
    vector<int> arr={4,3,7,2};

    for (int i = 0; i + 3 < arr.size(); i++) {
        cout << "[" << arr[i] << ", " << arr[i + 1] << ", " << arr[i + 2] << ", " << arr[i + 3]<<"]\n";
    }

    return 0;
}