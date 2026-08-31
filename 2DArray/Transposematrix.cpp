#include <iostream>
#include <vector>
using namespace std;

void Transpose(vector<vector<int>> arr){
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    return mat;
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
    
    Transpose(arr);
}