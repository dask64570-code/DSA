//! string matching(brut froce)

// #include <iostream>
// #include <string>
// using namespace std;
// int StringMatch(const string &s1,const string &s2){
//     int n=s1.size();
//     int m=s2.size();
//     for (int i = 0; i < n-m; i++)
//     {
//         int first = i;
//         int second = 0;
//         while(second < m){
//             if(s1[first] != s2[second]){
//                 break;
//             }else{
//                 first++,second++;
//             }
//         }
//         if(second == m){
//             return first-second;
//         }
//     }
//     return -1; 
// }
// int main(){
//     string s1,s2;
//     cout<<"enetr the string: ";
//     cin>>s1;
//     cin>>s2;
//     cout<<"index of the matched index: "<< StringMatch(s1,s2);
//     return 0;
// }

// !Advance Method
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Stringmatching(const string &s1, const string &s2){
    int n = s2.size();
    if(n == 0){
        return 0;
    }

    vector<int> lps(n,0);
    int pre = 0;
    int suff = 1;
    while(suff < n)
    {
        if(s2[pre] == s2[suff]){
            lps[suff]=pre+1;

            pre++;
            suff++;
        }else if(pre == 0){
            lps[suff]=0;
            suff++;
        }else{
            pre=lps[pre-1];
        }
    }

    int m = s1.size();
    int first = 0;
    int second = 0;
    while(first < m){
        if(s1[first] == s2[second]){
            first++;
            second++;
            if(second == n){
                return first - second;
            }
        }else if(s1[first] != s2[second] && second > 0){
            second = lps[second - 1];
        }else{
            first++;
        }
    }

    return -1;
}
    
int main(){
    string s1,s2;
    cout<<"Enter thr string: ";
    cin>>s1;
    cin>>s2;

    cout<<"Index of the matched string: "<<Stringmatching(s1,s2)<<'\n';
    return 0;
}