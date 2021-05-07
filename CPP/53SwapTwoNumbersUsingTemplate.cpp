#include<iostream>
using namespace std;

template<typename T>
    void Swap(T &t,T &e){
        T n;
        n=t;
        t=e;
        e=n;
    }

int main(){
    cout<<"Enter two data: <int>";
    int first,second;
    cin>>first>>second;
    Swap<int>(first,second);
    cout<<"swapped:"<<first<<" "<<second<<endl;

    cout<<"Enter two data:<string>";
    string f,s;
    cin>>f>>s;
    Swap<string>(f,s);
    cout<<"swapped:"<<f<<" "<<s<<endl;

    cout<<"Enter two data:<float>";
    float f1,s1;
    cin>>f1>>s1;
    Swap<float>(f1,s1);
    cout<<"Swapped:"<<f1<<" "<<s1<<endl;

    return 0;
}