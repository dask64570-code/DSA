#include <iostream>
#include <vector>
using namespace std;

void WaveForm(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();

    for (int j = 0; j < m; j++)
    {
       if (j % 2 == 0)
        {
            // Even column: top to bottom
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            // Odd column: bottom to top
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << "\n";
    }
 

int main(){
    int n,m;
    cout<<"Enter the size: ";
    cin>>n>>m;
    vector<vector<int> > arr(n,vector<int>(m));
    cout<<"Enter the array: ";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    WaveForm(arr);
    
    return 0;
}