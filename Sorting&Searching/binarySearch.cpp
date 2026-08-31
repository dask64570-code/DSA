// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[8];
//     cout << "enter 8 arrays:" << endl;
//     for (int i = 0; i < 8; i++)
//     {
//         cin >> arr[i];
//     }
//     int start = 0;
//     int end = 8;

//     int key;
//     cout << "enter the key:";
//     cin >> key;

    
    
//     while(start<=end){
//         int mid = (start + end) / 2;

//         if (arr[mid] == key)
//         {
//             cout << "key is found:" << mid <<endl;
//             break;
//         }
//         else if (arr[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//     return 0;
// }

// *reverse binary search
#include <iostream>
using namespace std;
int main()
{
    int arr[8];
    cout << "enter 8 arrays:" << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int start = 8;
    int end = 0;

    int key;
    cout << "enter the key:";
    cin >> key;

    
    
    while(start>=end){
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            cout << "key is found:" << mid <<endl;
            break;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return 0;
}