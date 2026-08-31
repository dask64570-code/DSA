#include <iostream>
#include <vector>
using namespace std;


void ReverseEachRow(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();

    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;
    
        while(start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++;
            end--;
        }
    }
    
    cout << "Reversed Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int n,m;
    cout<<"Enter the size (rows cols): ";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
   
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j] << " ";
        }
        cout<<"\n";
    }
    
    cout << "\n";
    ReverseEachRow(arr);
    
    return 0;
}