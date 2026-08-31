// !missing positive Integer

//^ M-1
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[6]={2,3,4,7,11,12};
//     cout<<"enter 6 arrays:"<<endl;
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }
//     int start=0,end=5;
//     int mid=start+(end-start)/2;
//     // First half: find missing from 1 to arr[mid]
//     for(int j=1;j<=arr[mid];j++){
//         bool found=false;
//         for(int i=start; i<=mid; i++){
//             if(arr[i]==j){
//                 found=true;
//                 break;
//             }
//         }
//         if(!found)
//         cout<<j<<" ";
//     }
//     // Second half: find missing from arr[mid]+1 onwards
//     for(int j=arr[mid]+1;j<=arr[end];j++){
//         bool found=false;
//         for(int i=mid+1; i<=end; i++){
//             if(arr[i]==j){
//                 found=true;
//                 break;
//             }
//         }
//         if(!found)
//         cout<<j<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// ^ m-2
#include <iostream>
using namespace std;

int main(){
    int arr[5]
    int start=0,end=arr.size()-1,mid,ans=arr.size(  ),k;

    while(start<=end){
        mid=start+(end-start)/2;

        if(arr[mid]-mid-1>=k){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans+k;
}