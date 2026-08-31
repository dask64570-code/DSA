#include <iostream>
#include <vector>
using namespace std;

void RotateAntiCLock(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();

   vector<vector<int>> swapped(m, vector<int>(n));  
    for (int i = 0; i < n; i++)
    {
        for (int j = m-1; j >=0; j--)
        {
            swapped[i][m-1-j]=arr[j][i];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<swapped[i][j]<<" ";
        }
        cout<<"\n";
        
    }
}

int main(){
    int n,m;
    cout<<"enter the size: ";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"enter the array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>arr[i][j];
        }
        
    }
    RotateAntiCLock(arr);
    
}