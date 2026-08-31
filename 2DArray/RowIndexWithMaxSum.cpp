#include <iostream>
#include <climits>
#include <vector>
using namespace std;

void RowIndexMaxSum(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();
    int MaxSum=INT_MIN,index = -1;
    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
            if(sum>MaxSum){
                MaxSum=sum;
                index=i;
            }
        }
    }
    cout << "Row index with max sum: " << index << "\n";
    cout << "Max sum: " << MaxSum << "\n";
    
}

int main(){
    int n,m;
    cout<<"Enter the size:";
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the array:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    RowIndexMaxSum(arr);
    
}