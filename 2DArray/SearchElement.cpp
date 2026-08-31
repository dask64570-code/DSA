#include <iostream>
#include<vector>
using namespace std;

void search(vector<vector<int>> arr){
    int n=arr.size();
    int m=arr[0].size();

    int x;
    cout<<"enter the traget:";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == x){
                cout<<"target is found: "<<x;
                return ;
            }
        }
        
    }
    cout<<x<<" target is not found: ";

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
    
    search(arr);
}