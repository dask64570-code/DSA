#include <iostream>
using namespace std;
int main(){
    int n,arr[]={0};
    for(int i = 0; i < 7; i++) {
        cout<<"Enter the elements here:"<<endl;
        cin >> arr[i];
    }
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];

        arr[0]=last;
    }
    for(int i=1;i<7;i++){
       cout<<arr[i];
    }

}



