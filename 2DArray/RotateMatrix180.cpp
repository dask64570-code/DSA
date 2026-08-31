#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Rotate180(vector<vector<int>> arr){
   int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> swapped(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j<m;j++) {
            swapped[n - 1 - i][m - 1 - j] = arr[i][j];
        }
    }
    
    cout<<"print the 180 rotate matrix:\n";
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        cout<<swapped[i][j]<<" ";
       }
       cout<<"\n";
       
    }
    
}


int main(){
    int n,m;
    cout<<"Enter the size: ";
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"Enter the Array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    Rotate180(arr);
}