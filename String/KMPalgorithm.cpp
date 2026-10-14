#include <iostream>
#include <string>
#include <vector>
using namespace std;

int LongestPreSuff(string s){
    int n = s.size();
    vector<int> arr(n,0);
    int pre = 0;
    int suff = 1;
    while(suff < n)
    {
        if(s[pre] == s[suff]){
            arr[suff]=pre+1;

            pre++;
            suff++;
        }else if(pre == 0){
            arr[suff]=0;
            suff++;
        }else{
            pre=arr[pre-1];
        }
    }
    return arr[n-1];
    
}
int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;

    cout << "Longest Prefix Suffix length: " << LongestPreSuff(s);

    return 0;
}