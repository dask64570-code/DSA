#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int target;
    cout<<"Enter the target:";
    cin>>target;
    int row=0,col=m-1;
    while(col>=0 && row<n){
        if(matrix[row][col]==target){
            return true;
        }else if(matrix[row][col]>target){
            col--;
        }else{
            row++;
        }
    }
    return false;
}

int main(){
     int n,m;
    cout<<"enter the size: ";
    cin>>n>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"enter the array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          cin>>matrix[i][j];
        }
        
    }
   if (binarySearch(matrix))
   {
       cout << "Target found";
   }
   else
   {
       cout << "Target not found";
   }
   return 0;
}