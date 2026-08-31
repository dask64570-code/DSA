// * print right anngled triangle in rightside
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r=1;r<=5;r=r+1){
//         for(int c=1;c<=5-r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// ^with user input
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the n num:";
//     cin>>n;
//     for(int r=1;r<=n;r=r+1){
//         for(int c=1;c<=n-r;c=c+1){
//             cout<<" ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
 
// *print 1 to 4 srial waise rigth  angled traingle in right side
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r =1;r<=4;r=r+1){
//         for(int c =1;c<=4-r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1; c<=r;c=c+1){
//             cout<<r<<" ";
//         }
//         cout<<endl;
//     }
// }

// *print 1 to 5 ascending order serial wise rigth  angled traingle in right side
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r=1;r<=5;r=r+1){
//         for(int c =1;c<=5-r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1; c<=r;c=c+1){
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }

// * print A to B ascending order serial wise right angled traingled in right side
// #include <iostream>
// using namespace std;
// ^M-1
// int main(){
//     for(int r =1;r<=5;r=r+1){
//         for(int c =1;c<=5-r;c=c+1){
//             cout<<"  ";
//         }
//         char name='A';
//         for(int c=1; c<=r;c=c+1){
//             cout<<name<<" ";
//             name=name+1;
//         }
//         cout<<endl;
//     }
// }
// ^M-2
// int main(){
//     for(int r =1;r<=5;r=r+1){
//         for(int c =1;c<=5-r;c=c+1){
//             cout<<"  ";
//         }
//         for(char c='A'; c<='A'+r-1;c=c+1){
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }
// }

// * print 5 to 1 descending ordre serial wise right angled traingled in right side
#include <iostream>
using namespace std;
int main(){
    for(int r =1;r<=5;r=r+1){
        for(int c =1;c<=5-r;c=c+1){
            cout<<"  ";
        }
        for(int c=r; c>=1;c=c-1){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}
