#include <iostream>
#include <vector>
using namespace std;

void AddMatrix(vector<vector<int>> arr1, vector<vector<int>> arr2){ 
    int n = arr1.size();
    int m = arr1[0].size();
    
    cout << "Result Matrix:\n";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cout << arr1[row][col] + arr2[row][col] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n,m;
    cout<<"Enter the size";
    cin>>n;
    cin>>m;
    vector<vector<int>>arr1(n,vector<int>(m));
    vector<vector<int>>arr2(n,vector<int>(m));
    cout<<"Enter the first matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr1[i][j];
        }
        
    }

    cout<<"Enter the second matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    AddMatrix(arr1,arr2);
}