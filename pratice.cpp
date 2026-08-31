#include<iostream>
#include<vector>
using namespace std;

void practice(vector<int> arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" "<<endl;
    }
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

    practice(arr);
    
}