#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int i, j;
    bool found;

    // taking array input
    cout << "Enter 5 numbers (from 1 to 6):" << endl;
    for(i = 0; i < 5; i++){
        cin >> arr[i];
    }

    // checking missing number
    for(i = 1; i <= 6; i++){
       found=false;  
        for(j = 0; j < 5; j++){
            if(arr[j] == i){
                found = true;
                break;
            }
        }

        if(found == true){
            cout << "Missing number is: " << i<<endl;
        }
    }

    return 0;
}