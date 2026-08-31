// * print star of real pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r =1;r<=5;r=r+1){
//         for(int c=1;c<=5-r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=2*r-1;c=c+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// *print pyramid of palindrom
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r =1;r<=5;r=r+1){
//         for(int c=1;c<=5-r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<c<<" ";
//         }
//         for(int s=r-1;s>=1;s=s-1){
//             cout<<s<<" ";
//         }
//         cout<<endl;      
//     }
// }

// * print real pyramid upside down
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r =1;r<=5;r=r+1){
//         for(int c=1;c<=r-1;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=5-(r-1);c=c+1){
//             cout<<"*"<<" ";
//         }
//         for(int s=1;s<=5-r;s=s+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;      
//     }
// }
// * print real pyramid upside down taking user input
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the num n:";
//     cin>>n;
//     for(int r =1;r<=n;r=r+1){
//         for(int c=1;c<=r-1;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=n-(r-1);c=c+1){
//             cout<<"*"<<" ";
//         }
//         for(int s=1;s<=n-r;s=s+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;  
//     }
// }

// *print sqaure biech me round
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the num n:";
//     cin>>n;
//     for(int r =n;r>=1;r=r-1){
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         for(int c=1;c<=2*n-2*r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;        
//     }
//     for(int r =1;r<=n;r=r+1){
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         for(int c=1;c<=2*n-2*r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;      
//     }
// }

// *print butterfly 
// #include <iostream>
// using namespace std;
// int main(){
//     for(int r =1;r<=4;r=r+1){
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         for(int c=1;c<=8-2*r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;      
//     }
//     for(int r=3;r>=1;r=r-1){
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         for(int c=1;c<=8-2*r;c=c+1){
//             cout<<"  ";
//         }
//         for(int c=1;c<=r;c=c+1){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// *print diamond
#include <iostream>
using namespace std;
int main(){
    for(int r=1;r<=4;r=r+1){
        for(int c=1;c<=4-r;c=c+1){
            cout<<"  ";
        }
        for(int c=1;c<=r;c=c+1){
            cout<<"* "<<"  ";
        }
        cout<<endl;
    }
    for(int r=4;r>=1;r=r-1){
        for(int c=1;c<=4-r;c=c+1){
            cout<<"  ";
        }
        for(int c=1;c<=r;c=c+1){
            cout<<"* "<<"  ";
        }
        cout<<endl;
    }
    
}