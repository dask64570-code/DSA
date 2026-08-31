#include <iostream>
#include <vector>
using namespace std;

//! M-1
// int binarySearch(const vector<vector<int>>& matrix){
//     int n=matrix.size();
//     int m=matrix[0].size();
//     int target;
//     cout<<"enter the target: ";
//     cin>>target;
//     int i=0,j=0;
//     while(i<n){
//     if(matrix[i][j]<=target && target<=matrix[i][n-1]){
//         int start=0,end=n-1;
//          while(start<=end){
//             int mid = start+(end-start)/2;
//             if (matrix[i][mid]==target)
//             {
//                 return 1;
//             }else if (matrix[i][mid] < target){
//                 start = mid + 1;
//             }else{
//                 end=mid-1;
//             }
//         }
//     }else{
//         i++;
//     }  
//     }
//     return 0;
// }
// int main(){
//     int n,m;
//     cout<<"enter the size: ";
//     cin>>n>>m;
//     vector<vector<int>>matrix(n,vector<int>(m));
//     cout<<"enter the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//           cin>>matrix[i][j];
//         }
        
//     }
//    if (binarySearch(matrix))
//    {
//        cout << "Target found";
//    }
//    else
//    {
//        cout << "Target not found";
//    }
// }

// !M-2
// #include <iostream>
// #include <vector>
// using namespace std;

// int binarySearch(const vector<vector<int>>& matrix){
//     int n=matrix.size();
//     int m=matrix[0].size();
//     int target,row_index,col_index;
//     cout<<"enter the target: ";
//     cin>>target;
//     int start=0,end=n*m-1;
//     while(start<=end){
//         int mid = start+(end-start)/2;
//         row_index=mid/m;
//         col_index=mid%m;
//         if (matrix[row_index][col_index]==target)
//         {
//             return 1;
//         }else if (matrix[row_index][col_index] < target){
//             start = mid + 1;
//         }else{
//             end=mid-1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n,m;
//     cout<<"enter the size: ";
//     cin>>n>>m;
//     vector<vector<int>>matrix(n,vector<int>(m));
//     cout<<"enter the array: ";
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//           cin>>matrix[i][j];
//         }
        
//     }
//    if (binarySearch(matrix))
//    {
//        cout << "Target found";
//    }
//    else
//    {
//        cout << "Target not found";
//    }
// }

// !Binary search on decreasing order
int binarySearch(const vector<vector<int>>& matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int target;
    cout<<"enter the target: ";
    cin>>target;
    int i=0,j=0;
    while(i<n){
    if(matrix[i][j]>=target && target>=matrix[i][n-1]){
        int start=0,end=n-1;
         while(start<=end){
            int mid = start+(end-start)/2;
            if (matrix[i][mid]==target)
            {
                return 1;
            }else if (matrix[i][mid] < target){
                end=mid-1;
            }else{
                start = mid + 1;
            }
        }
    }else{
        i++;
    }  
    }
    return 0;
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
}
