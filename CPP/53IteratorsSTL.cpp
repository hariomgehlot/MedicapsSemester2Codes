#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={11,21,24,2,44,334};       //Int vector
    vector<int>::iterator it;

    cout<<"Accessing elements with iterators:\n";
    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"  ";

    v.insert(it,9,5337);      //Insert 5337 nine times after 5th index
    cout<<"\n\nAfter using insert function:\n";
    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"  ";

    it=it-5;       //Reposition i to backward 5th position
    v.erase(it,it+2);     //Erasing 2 elements from 5th index
    cout<<"\n\nAfter using erase function:\n";
    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"  ";

    return 0;
}