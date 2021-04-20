#include<iostream>
using namespace std;
class Base{
    public:
    int a;
    Base(){
        a=10;
        cout<<"This is Default Construtor, it has intitialised value of  a to "<<a<<endl;
    }
    ~Base(){
        cout<<"Destructor Called "<<endl;
    }
};

int main(){
Base obj;
return 0;
}