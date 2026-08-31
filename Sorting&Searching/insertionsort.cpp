// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];

//     cout<<"enter the numbers:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     int n = 5;

//     // Insertion Sort
//     for(int i=1;i<n;i++){   
//         for(int j=i;j>0;j--){
//             if(arr[j] < arr[j-1]){
//                 swap(arr[j], arr[j-1]);
//             }else{
//                 break;
//             }
//         }
//     }

//     // Print sorted array
//     cout<<"sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// *decreasing order
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];

//     cout<<"enter the numbers:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     int n = 5;

//     // Insertion Sort (Decreasing Order)
//     for(int i=1;i<n;i++){
//         for(int j=i;j>0;j--){
//             if(arr[j] > arr[j-1]){
//                 swap(arr[j], arr[j-1]);
//             }else{
//                 break;
//             }
//         }
//     }

//     // Print sorted array
//     cout<<"sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// *Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array.
#include <iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"enter the numbers:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int n = 5;

    // Insertion Sort (from last)
    for(int i = n-2; i >= 0; i--){
        for(int j = i; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }else{
                break;
            }
        }
    }

    // Print sorted array
    cout<<"sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}