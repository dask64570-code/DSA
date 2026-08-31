#include <iostream>
#include <vector>
using namespace std;

// &FOUR SUM

int FourSum(vector<int> arr)
{
    int n = arr.size(), target;
    cout << "enter the target:";
    cin >> target;
    
    
    for (int i = 0; i < n - 3; i++) {
        int left = i + 1, right = n - 2;
        
         
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target) {
                return 1;
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return 0;
}

    int main()
    {
        int n;
        cout << "enter the size:";
        cin >> n;
        vector<int> arr(n);
        cout << "enter the arrays:";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << FourSum(arr);
    }