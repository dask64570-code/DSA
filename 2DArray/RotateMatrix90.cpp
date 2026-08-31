#include <iostream>
#include <vector>
using namespace std;

vector<int> Rotate90(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> result(m, vector<int>(n));

    for (int j = 0; j < n; j++) {
        for (int i = m - 1; i >= 0; i--) {
            result[m - 1 - i][j] = arr[j][i];
        }
    }
    arr=result;
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
    Rotate90(arr);
}