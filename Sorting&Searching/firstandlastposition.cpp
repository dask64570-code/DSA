// *first position 
// #include <iostream>
// using namespace std;

// int main(){
//     int n, arr[1000];
//     cin>>n;
//     cout<<"enter the numbers:";
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int key=8,Firstindx=0;

//     int start=0,end=n;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             Firstindx=mid;
//             cout<<"At index:"<<Firstindx;
//             end=mid-1;
//             break;
//         }else if(arr[mid]<key){
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return 0;
// }

// *last position
#include <iostream>
using namespace std;

int main(){
    int n, arr[1000];
    cin>>n;
    cout<<"enter the numbers:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key=8,lastindx=0;

    int start=0,end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            lastindx=mid;
            cout<<"At index:"<<lastindx;
            start=mid+1;
            break;
        }else if(arr[mid]<key){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return 0;
}