#include<iostream>
#include <vector>
using namespace std;

// !M-1
// int main(){
//     vector<int> arr={3,4,-2,5,8,20,-10,8}; 

//     int n = arr.size();

//     for(int i=0;i<n-1;i++){
//         int sum1=0,sum2=0;
//         for(int j=0; j<=i; j++){
//             sum1 += arr[i];
//         }
//         for(int j=i+1; j<n; j++){
//             sum2 += arr[i];
//         }
//         if(sum1==sum2){
//             cout<<"the array is divided equally between "<< sum1 << " and " << sum2 << endl;
//         }
//     }
//     return 0;
// }

//! M-2


bool divide(vector<int> arr){
    int n=arr.size();
    int sum =0,Totalsum=0;
    for(int i =0; i<n;i++){
        sum += arr[i];
    }
    int prefix = 0;
    for(int i=0;i<n-1;i++){
        prefix += arr[i];
        Totalsum= prefix-sum;
    }
    if(Totalsum = prefix){
        cout<<"the array is divided equally between "<< prefix << " and " << Totalsum << endl;
    }
    return 0;
}
int main(){

    int n;
    cout<<"enter the size of array";
    cin>>n;
    vector<int>arr(n); 
    cout<<"enter the element of array";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    cout<<divide(arr);

    
}