#include <iostream>
#include <vector>
using namespace std;

    void SumofDiagonal(vector<vector<int>> arr){
    int n = arr.size();

    int first = 0;
    int sec = 0;

    // first diagonal (top-left to bottom-right)
    for(int i = 0; i < n; i++){
        first += arr[i][i];
    }

    // second diagonal (top-right to bottom-left)
    for(int i = 0; i < n; i++){
        sec += arr[i][n-1-i];
    }

    cout << "First diagonal sum: " << first << "\n";
    cout << "Second diagonal sum: " << sec << "\n";
}


int main(){
    int n,m;
    cout<<"Enter the size:";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the array:";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            cin>>arr[row][col];
        }
        
    }
    
    SumofDiagonal(arr);
    return 0;
}