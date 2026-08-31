#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    // * declare
    vector <int> v;
    vector<int> v1 = {1,2,3,4,5};

    // *size and capacity
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;

    // *push element
    v.push_back(2);
    v.push_back(21);
    v.push_back(5);
    v.push_back(1);
    cout<<"size of v:"<<v.size()<<endl;
    cout<<"capacity of v:"<<v.capacity()<<endl;

    // *sort
    sort(v.begin(),v.end());
    // sort(v.begin(),v.end(),greater<int>());

    // *update value
    // v[1]=1;

    // *display 
    // for(int i = 0; i < v.size(); i++) {
    // cout << v.at(i) << " ";
    // }
    // cout<<endl;
    // for(int i = 0; i < v1.size(); i++) {
    // cout << v1.at(i) << " ";
    // }

    // for(auto i:v1)
    // cout<<i<<endl;

    // cout<<endl;

    for(auto it=v.begin(); it!=v.end(); it++){
        cout<< *it <<" ";
    }

    // *delete value
    // v1.pop_back();
    // cout<<endl;
    // for(int i = 0; i < v1.size(); i++) {
    // cout << v1.at(i) << " ";
    // } 
    //  cout<<endl;
    // v.erase(v.begin()+ 1);
    // for(int i = 0; i < v.size(); i++) {
    // cout << v.at(i) << " ";
    // }

    // *insert value
    // cout<<endl;
    // v.insert(v.begin()+1,4);
    //  for(int i = 0; i < v.size(); i++) {
    // cout << v.at(i) << " ";
    // }

    // *clear
    // cout<<endl;
    // v.clear();
    // cout<<"size of v:"<<v.size()<<endl;
    // cout<<"capacity of v:"<<v.capacity()<<endl;

    // *search
    // cout<<endl;
    // cout<<binary_search(v.begin(),v.end(),2)<<endl;

    // *find index
    cout<<endl;
    cout<<find(v.begin(),v.end(),2)-v.begin()<<endl;
    
} 