#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10,20,7,11,8,4};
    int ans = -1, searchelement, i;

    cout << "Enter the element:" << endl;
    cin >> searchelement;

    for(i = 0; i < 6; i++){
        if(searchelement == arr[i]){
            ans = arr[i];
            break;
        }
    }

    if(ans != -1){
        cout << "Element found: " << ans;
    }else{
        cout << "Element not found:"<<ans;
    }

    return 0;
}