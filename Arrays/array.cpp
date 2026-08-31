// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<4;i++){
//         cout<<" "<<arr[i];
//     }
// }  

// *find the minmum number
// #include <iostream> 
// #include <climits>
// using namespace std;
// int main(){
//     int arr[5]={6,4,9,1,6};
//     int ans=INT_MAX;
//     for(int i=0;i<5;i++){
//         if(arr[i]<ans){
//             ans=arr[i];
//         }
//     }
//     cout<<ans;
//     return 0;
// }  
 
// *find the mixmum number
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int ans=INT_MIN;
    int arr[5]={6,4,9,1,6};
    for(int i=0;i<5;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    cout<<ans;
    return 0;
}  