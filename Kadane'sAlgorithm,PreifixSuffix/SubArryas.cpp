// ! print each element as individual array
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[4]={4,3,7,2};

//     int sum=0;

//     // print n elements of array
//     for(int i =0;i<4;i++){
//         cout<< arr[i] << " ";
//     }
//     return 0;
// }

// !print 2 size sub array 
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[4]={4,3,7,2};

//     int start=0, end=1;


//     // print n elements of array
//     while(end<4){
//         cout<< arr[start]<< " "<<arr[end]<<endl;
//         start++;
//         end++;
//     }
//     return 0;
// }

// !print 3 size sub array
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[4] = {4,3,7,2};

//     int start = 0;
//     int end = 2;   // window size 3

//     while(end < 4) {
//         cout<<arr[start]<< " "<<arr[start + 1]<< " "<<arr[end]<<endl;
//         start++;
//         end++;
//     }
//     return 0;
// }

// !print 4 size sub array
#include <iostream>
using namespace std;

int main() {
    int arr[4] = {4,3,7,2};

    int start = 0;
    int end = 3;   

    while(end < 4) {
        cout << arr[start] << " "
             << arr[start + 1] << " "
             << arr[start + 2] << " "
             << arr[end] << endl;

        start++;
        end++;
    }

    return 0;
}