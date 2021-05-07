#include<iostream>
using namespace std;
template <typename T>
T function(T t,T v){
    return t>v?t:v;
}

int main(){
    cout<<"Enter two data: <int>";
    int first,second;
    cin>>first>>second;
    cout<<"Greater is :"<<function<int>(first,second)<<endl;

    cout<<"Enter two data:<string>";
    string f,s;
    cin>>f>>s;
    cout<<"Greater is :"<<function<string>(f,s)<<endl;

    cout<<"Enter two data:<float>";
    float f1,s1;
    cin>>f1>>s1;
    cout<<"Greater is :"<<function<float>(f1,s1)<<endl;

    return 0;

}