#include <iostream>
using namespace std;

int main(){
    int i, arr[7];
    cout << "enter 7 arrays:" << endl;
    for (i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = 6, ans = 0, target;

    cout << "enetr your target:";
    cin >> target;

    while (start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid]==target){
            ans=arr[mid];
        }else if(arr[mid]>arr[0]){
            if((arr[start]<=target)&&(arr[mid]>=target)){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else if((arr[mid]<=target)&&(arr[end]>=target)){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return 0;
}
        