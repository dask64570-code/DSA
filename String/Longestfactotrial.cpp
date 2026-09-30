#include <iostream>
#include <string>
#include <vector>
using namespace std;

string Longestfact(string num) {
   vector <int>ans(1,1);
   while(num>1){
    int carry =0,res,size=ans.size();
    for(int i =0; i<size; i++){
        res=ans[i]*num+carry;
        carry=res/10;
        ans[i]=res%10;
    }
    while(carry){
        ans.push_back(carry%10);
        carry/=10;
    }
    num--;
   }
   reverse(ans.begin(),ans.end())
}

int main() {
    string num;
    cout << "Enter the number: ";
    cin >> num;

    cout << Longestfact(num) << endl;
    return 0;
}