#include <iostream>
#include <string>
using namespace std;

void SortString(string &str){
    int n=str.size()-1;
    for(int i=0;i<=n;i++){
        int minIndex=i;
        for(int j=i+1;j<=n;j++){
            if(str[j]<str[minIndex]){
                minIndex=j;
            }
        }
        swap(str[i],str[minIndex]);
    }
    for(int i=0;i<=n;i++){
        cout<<str[i ];
    }
}

int main(){
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);

    SortString(str);
    return 0;
}