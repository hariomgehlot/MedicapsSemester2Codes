#include<iostream>
using namespace std;
class Base{
    public:
    int a;
    Base(int c=90){
        a=c;
        cout<<"This is Default Construtor with Default Arguments , it has intitialised value of  a to "<<a<<endl;
    }
};

int main(){
Base obj(70);
Base obj1;
return 0;
}