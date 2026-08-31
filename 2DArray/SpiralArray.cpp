#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> SpiralForm(vector<vector<int>> arr){
    vector<int> ans;
    int n=arr.size();
    int m=arr[0].size();
    int top=0,right=m-1,bottom=n-1,left=0;

    while(top<=bottom && left<=right){
        // top
        for(int j=left;j<=right; j++)
        ans.push_back(arr[top][j]);
        top++;

        // right
        for(int i=top;i<=bottom;i++)
        ans.push_back(arr[i][right]);
        right--;

        // botom
        if(top<=bottom){
            for(int j=right;j>=left;j--)
            ans.push_back(arr[bottom][j]);
            bottom--;
        }

        // left
        if(left<=right){
            for(int i=bottom;i>=top;i--)
            ans.push_back(arr[i][left]);
            left++;
        }
    }
    return ans;
}

int main(){
    int n,m,ans;
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
    SpiralForm(arr);
  
}




