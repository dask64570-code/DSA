// // *selection sort
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"enter the numbers"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int n = 5;
//     // Selection Sort
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j] < arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
//     // Print sorted array
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// *selection sort but descending wise
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     cout<<"enter the numbers"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     int n = 5;
//     // Selection Sort
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j] > arr[minIndex]){
//                 minIndex = j;
//             }
//         }
//         swap( arr[minIndex],arr[i]);
//     }
//     // Print sorted array
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// *Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

// #include <iostream>
// using namespace std;

// int main(){
//     int arr[5];

//     cout<<"enter the numbers"<<endl;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }

//     int n = 5;

//     // Selection Sort (max to last)
//     for(int i=n-1;i>0;i--){
//         int maxIndex = 0;

//         for(int j=1;j<=i;j++){
//             if(arr[j] > arr[maxIndex]){
//                 maxIndex = j;
//             }
//         }

//         swap(arr[maxIndex], arr[i]);
//     }

//     // Print sorted array
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// *Selection Sort Algorithm to sort the array of char in ascending order
 #include <iostream>
using namespace std;
int main(){
    char arr[5];
    cout<<"enter 5 characters:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int n = 5;
    // Selection Sort
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    // Print sorted array
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
