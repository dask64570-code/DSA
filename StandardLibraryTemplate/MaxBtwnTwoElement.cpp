#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// !Max diference between 2 element 
int Max(vector<int>arr){
    int ans= INT_MIN,n=arr.size();
    int suffix = n;
    int sum;
    for(int i=n-1;i>0;i--){
        ans = max(ans,suffix-i);
        if(i>suffix){
            suffix = i;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the size";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the numbers";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<Max(arr);
}