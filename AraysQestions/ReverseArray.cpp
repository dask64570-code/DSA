// *Reverse Array
// #include <iostream>
// using namespace std;
// int main(){
//     int start=0,last=5;
//     int arr[6]={6,11,7,4,8,9};
//     while(start<last){
//         swap(arr[start],arr[last]);
//         start++;
//         last--;
//     };
//         for(int i=0;i<6;i++){
//             cout<<arr[i]<<" ";
//         }
// }

// *REverse Array by taking user input
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter size: ";
//     cin >> n;
//     int* arr = new int[n];   // dynamic array
//     // taking input
//     for(int i = 0; i < n; i++) {
//         cout<<"Enter the elements here:"<<endl;
//         cin >> arr[i];
//     }
//     int start = 0;
//     int last = n - 1;
//     // reversing the array
//     while(start < last) {
//         swap(arr[start], arr[last]);
//         start++;
//         last--;
//     }
//     // printing array
//     cout<<"the reverse array is this";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     delete[] arr;   // free memory
// }

