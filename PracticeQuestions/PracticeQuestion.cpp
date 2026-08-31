// *convert small aplhabet to uppcase
// #include <iostream>
// using namespace std;
// char convert(char &c){
//     char ans;
//     int NewC = c;
//     if(NewC >= 'a' && NewC <= 'z'){
//         ans = NewC - 32;
//     }
//     return ans;
// }
// int main(){
//     char c;
//     cout<<"Enter the alphabet:";
//     cin>>c;
//     char Ans = convert(c);
//     cout<<"The answer is:"<<Ans;
// }

// *check amrstrong number
// #include <iostream>
// #include <cmath>
// using namespace std;
// int CheckArmstrong(int &a,int &b,int &c){
//     int number= a*100 + b*10 + c;
//     int store = number;
//     string s =to_string(number);
//     int digits=s.length();
//     int Ans = pow(a,digits) + pow(b,digits) + pow(c,digits);
//     if(Ans == store){
//         return store;
//     }
//     return 0;
// }
// int main(){
//     int a,b,c;
//     cout<<"enter the three number:";
//     cin>>a>>b>>c;
//     int ans =CheckArmstrong(a, b, c);
//     cout<<"The Answer is :"<<ans;
// }
// ^method-2
// #include <iostream>
// #include <cmath>
// using namespace std;
// int countDigit(int num){
//     int count=0;
//     while(num){
//         count++;
//         num/=10;
//     }
//     return count;
// }
// int CheckArmstrong(int &num, int &digit){
//     int n=num,ans=0,rem;
//     while(n){
//         rem=n%10;
//         n/=10;
//         ans = ans + (int)pow(rem, digit);
//     }
//     if(ans==num){
//         return 1 ;
//     }else{
//         return 0;
//     }
// }
// int main(){
//     int num;
//     cout<<"enter the number:";
//     cin>>num;
//     int digit = countDigit(num);
//     cout<<"the answer is :"<<CheckArmstrong(num,digit);
// }

// *find trailing if zeros in a fact
// #include <iostream>
// using namespace std;
// int long long fact(int &num){
//     int fct=1;
//     for(int i=1;i<=num;i++){
//         fct=fct*i;
//     }
//     return fct;
// }int long long coutTrails(int &fact){
//     int count = 0;
//     while(fact % 10 == 0 && fact != 0) {
//         count++;
//         fact = fact / 10;
//     }
//     return count;
// }
// int main(){
//     int num,result;
//     cout<<"enter the number:";
//     cin>>num;
//     result =fact(num);
//     cout<<"the answer is:"<<result<<endl;
//     cout<<"the answer is:"<<coutTrails(result);
// }

// *check it is a rectangle
// #include <iostream>
// using namespace std;
// bool ckeckRectangle(int &a,int &b,int &c,int &d){
//     if(((a==b)&&(c==d)) ||((a==c)&&(c==d)) ||((a==d)&&(b==c))){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int main(){
//     int a,b,c,d,result;
//     cout<<"enter the four numbers:";
//     cin>>a>>b>>c>>d;
//     result=ckeckRectangle(a,b,c,d);
//     cout<<"the answer is:"<<result;
// }

// *Total moves for bhishop
// #include <iostream>
// using namespace std;
// int Bhishop(int &a,int &b){
//     int count=0;

//     count+=min(8-a,8-b);
//     count+=min(a-1,8-b);
//     count+=min(a-1,b-1);
//     count+=min(8-a,b-1);

//     return count;
// }
// int main(){
//     int A,B;
//     cout<<"enter the moves:";
//     cin>>A>>B;
//     cout<<"The steps are:"<<Bhishop(A,B);

// }

// *Nim Game
#include <iostream>
using namespace std;
int NimGame(int n){
    if(n%4==0){
        return 0;
    }else{
        return 1;
    }
}
int main(){
     int A;
    cout<<"enter the moves:";
    cin>>A;
    cout<<"The answer is:"<<NimGame(A);
}