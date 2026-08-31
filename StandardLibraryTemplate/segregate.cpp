// * SEGERGATE 0 AND 1
#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,0,1,0,0,1,1,0,1};

    int start=0, end=9;

    while(start<end){
        if(arr[start]==0){
            start++;
        }
        else{
            if(arr[end]==0){
                swap(arr[start],arr[end]);
                start++, end--;
            }
            else{
                end--;
            }
        }
    }
    cout<<"segregate 0 and 1 is:"<<endl;
    for(int i = 0; i<9;i++){
        cout<<arr[i]<<" ";
    } 
}