#include<iostream>
using namespace std;
template<typename T>
    void inline Swap( T &first, T & second){
       T element = first;
       first =second;
       second =element; 
    }
int main(){
    cout<<"Enter Some data :"<<endl;
    cout<<"Enter first Integer :";
    int first;
    cin>>first;
    cout<<"Enter second Integer :";
    int second;
    cin>>second;
    swap(first,second);
    cout<<"First: "<<first<<"     Second : "<<second<<endl;
    cout<<"Enter first String :";
    string fstring;
    cin>>fstring;
    cout<<"Enter second String :";
    string sstring;
    cin>>sstring;
    swap(fstring,sstring);
    cout<<"First: "<<fstring<<"    Second : "<<sstring<<endl;
    
    return 0;
}