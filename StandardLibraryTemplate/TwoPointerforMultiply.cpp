#include <iostream>
using namespace std;

int main(){
    int arr[5]={3,7,8,11,25};

    int start=0, end=4;
    int target=56;

    while(start < end){
        int mul = arr[start] * arr[end];
        if(mul == target){
            cout <<arr[start]<< " "<<arr[end]<<" Mul:"<<mul<< endl;
            break;
        } else if(mul < target){
            start++;
        } else {
            end--;
        }
    }
    return 0;
}