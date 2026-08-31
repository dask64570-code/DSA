// #include <iostream>
// using namespace std;
// int main(){
//     int curr = 1, prev = 0, last;
//     int i = 0; 
//     while(i < 8){
//         last = prev + curr;
//         cout << last << " ";
//         prev = curr;
//         curr = last;
//         i++;
//     }
//     return 0;
// }

// *with array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr the number:";
    cin>>n;
    int arr[1000];

    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n-1;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n-1];
}





