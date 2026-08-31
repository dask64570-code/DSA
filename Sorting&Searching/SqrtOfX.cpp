// ! My COde of Sqrt of X (giving answ correct )

#include <iostream>
using namespace std;

int main(){
    int n, arr[1000];
    cin>>n;
    cout<<"enter the numbers:";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
     
    int start=0,mid,end=n,ans=0,target;
    cout<<"entrt your target:";
    cin>>target;

    while(start<=end){
        mid = start+(end-start)/2;

        if((long long)arr[mid]*arr[mid]==target){
            cout<<"The Answer is:"<<mid;
            break;
        }else if((long long)arr[mid]*arr[mid]>target){
            end=mid-1;
        }else{          /*if((lon long) arr[mid]*arr[mid]<taget)*/
            start=mid+1;
            ans=mid;
        }
    }
    cout<<"The possible sqrt of X is:"<<mid;

    return 0;

}
