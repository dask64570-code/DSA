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

