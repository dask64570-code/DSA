#include <iostream>
using namespace std;

// *print square of number
// int main(){
//    for(int i =1; i<=7;i= i+1){
//     cout<<i<<" square is: "<<i*i<<endl;
//    }
// } 

//* print eveb number only upto n
// int main(){
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     for(int i =1; i<num; i= i+1){
//         if(i%2==0){
//             cout<<i<<" is a even number"<< endl;
//         }
//     }
//     cout<<"ALL EVEN NUMBER IS PRINTED";
// }

// *print a to z
// #include <iostream>
// using namespace std;
// int main(){
//     char c;
//     for(c='a';c<='z';c++){
//         cout<<c<<" ";
//     }
// }

// *print n number in reverse 
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     for(int i = num;i>=1; i=i-1){
//         cout<<i<<endl;
//     }
// }

// *print 1 to 100 in gap of 3 
// #include<iostream>
// using namespace std;
// int main(){
//     for (int i =1; i<=100; i=i+3){
//         cout<<i<<endl;
//     }
// }

// *print any table of any number
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     for(int i =1; i<=10 ; i=i+1){
//         cout<<"6 x"<<i<<"="<<num*i<<endl;
//     }
// }
//^ method-2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i =n; i<=10*6;i=i+6){
//         cout<<i<<endl;
//     }
// }

// *power of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int num , pow;
//     cin>>num;
//     cin>>pow;
//     int base = num; 
//     for(int i=1;i<pow;i=i+1){
//         num=num*base;
//     }
//     cout<<"final answer :"<<num; 
// }

//*sum of n naturals
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i =1;i<=n;i=i+1){
//         sum=sum+i;
//     }
//     cout<<"final answer: "<<sum;
// }

// *sum of squars of n naturals number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i =1;i<=n;i=i+1){
//         sum=sum+i*i;
//     }
//     cout<<"final answer: "<<sum;
// }

// *factorial of any number
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     int fct=1;
//     for(int i =1; i<=num; i=i+1){
//         fct=fct*i;
//     }
//     cout<<"final answer: "<<fct;
// }

// *prime number check
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     if(num%1 ==0 && num%num==0){
//         cout<<"it is a prime number";
//     }else {
//         cout<<"it is not a prime number";
//     }
// }
//^ method 2 
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     if(num<2){
//         cout<<"it is not prime";
//         return 0;
//     }else if(num>2){ 
//         for(int i =2;i<num;i=i+1){
//             if(num%i==0){
//                 cout<<"it is not prime";
//                 return 0;
//             }else{
//                 cout<<"it is prime";
//             }
//         }
//     }
// }

// *fibbonaci series 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int last=0,prv=1,curr;
//     cout<<last<<" "<<prv<<" ";
//     for(int i =1; i<=n;i=i+1){
//         curr=prv+last;
//         cout<<curr<<" ";
//         last=prv;
//         prv=curr;
//     }
// }
