// *bubble sort
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"enter the number:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int n;
//     cout<<"enter the number:"<<endl;
//     cin>>n;
//     for(int i=0;i<n-1;i++){
//        for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//        }
//     }
//     // sorted array
//     cout<<"this is the sorted array in bubble sort: "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// *bubble sort in decending order
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"enter the number:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int n;
//     cout<<"enter the number:"<<endl;
//     cin>>n;
//     for(int i=0;i<n-1;i++){
//        for(int j=0;j<n-i-1;j++){
//         if(arr[j]<arr[j+1]){
//             swap(arr[j+1],arr[j]);
//         }
//        }
//     }
//     // sorted array
//     cout<<"this is the sorted array in decending order in bubble sort: "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// * Bubble Sort Algorithm to sort the array of char in ascending order
// #include <iostream>
// using namespace std;
// int main(){
//     char arr[5];
//     cout<<"enter 5 characters:"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int n;
//     cout<<"enter the number:"<<endl;
//     cin>>n;
//     for(int i=0;i<n-1;i++){
//        for(int j=0;j<n-i-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//        }
//     }
//     // sorted array
//     cout<<"this is the sorted array in bubble sort: "<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

#include <iostream>
using namespace std;

int main(){
    int arr[5];

    cout<<"enter the numbers:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int n = 5;

    // Reverse Bubble Sort (smallest to front)
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j-1], arr[j]);
            }
        }
    }

    // Print sorted array
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}