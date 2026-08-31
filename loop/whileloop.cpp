// *while loop example
// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     i=1;
//     while(i<=10){
//         cout<<i;
//         cout<<endl;
//         i++;
//     }
// }

// *table of any thing
// #include <iostream>
// using namespace std;
// int main(){
//     int i=1,n;
//     cout<<"Enter the number n:";
//     cin>>n;
//     while(i<=10){
//         cout<<n<<"x"<<i<<"="<<n*i;
//         cout<<endl;
//         i++;
//     }
// }

// *n number is divided by which number
// #include <iostream>
// using namespace std;
// int main(){
//     int i, n;
//     cout << "Enter the number: ";
//     cin >> n;
//     i = 1;   
//     while(i <= n){
//         if(n % i == 0){
//             cout << n << " is divisible by " << i;
//         } else {
//             cout << n << " is not divisible by " << i;
//         }
//         cout << endl;
//         i++;
//     }
// }

// *print 1 to n check even or odd
// #include <iostream>
// using namespace std;
// int main(){
//     int i, n;
//     cout << "Enter the number: ";
//     cin >> n;
//     i = 1;   
//     while(i <= n){
//         if(i % 2 == 0){
//             cout << i << " is even number ";
//         } else {
//             cout << i << " is odd number ";
//         }
//         cout << endl;
//         i++;
//     }
// }

// *print sum of n natural numbers 
// #include <iostream>
// using namespace std;
// int main(){
//     int i=1,sum;
//     sum=0;
//     do{
//         sum=sum+i;
//         i++;
//         cout<<"the total sum is:"<<sum;
//     }while(i<=10);
// }

// &BREAK STATEMENT
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         if(i==4){
//             break;
//         }
//         cout<<i<<endl;
//     }
// }

// &CONTINUE STATEMENT
// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         if(i==4){
//             continue;
//         }
//         cout<<i<<endl;
//     }
// }
