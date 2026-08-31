// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i=i*2){
//         cout<<"sunil"<<endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j=j+i){
        cout<<"sunil"<<endl;
    }
    return 0;    
} 





