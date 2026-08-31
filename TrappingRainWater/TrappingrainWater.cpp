#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int Maxunit(vector<int>arr){
    int n=arr.size(),unit=0,index=0;
    int maxheight=arr[0],maxLeft=0,maxRight=0;

    for(int i =1;i<n;i++){
        if(arr[i]>maxheight){
            maxheight = arr[i];
            index=i;
        }
    }
    
    for(int i=0;i<index;i++){
        if(maxLeft>arr[i]){
            unit += maxLeft-arr[i];
        }else{
            maxLeft=arr[i];
        }
    }

    for(int i=n-1;i>index;i--){
        if(maxRight>arr[i]){
            unit += maxRight-arr[i];
        }else{
            maxRight=arr[i];
        }
    }
    return unit;
}

int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    vector<int>arr(n); 
    cout<<"enter the arrays:";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<Maxunit(arr);
    
}