// ! Peak Index Of Mounting Array
// #include <iostream>
// #include <climits>
// using namespace std;

// int main(){
//     int i,arr[7];
//     cout<<"Enter the arrys:"<<endl;
//     for(i =0;i<7;i++){
//         cin>>arr[i];
//     }

//     int ans=0;
//     int num=INT_MIN;
    
//     for(i=0;i<7;i++){
//         if(arr[i]>num){
//             num=arr[i];
//             ans=i;
//         }
//     }
//     cout<<"the answer of peak mounting is:"<<num<<endl;
//     cout<<"and the index of that peak is:"<<ans<<endl;

//     return 0;
// }

// !method-2
#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    cout << "enter 8 arrays:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = 7;
    
    while(start>=end){
        int mid = end+(start - end) / 2;

        if ((arr[mid]>arr[mid-1])&&(arr[mid]>arr[mid+1]))
        {
            return mid;
        }
        else if (arr[mid] > arr[mid-1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}