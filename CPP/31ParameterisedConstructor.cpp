#include<iostream>
using namespace std;
class Base{
    public:
    int a,b;
    Base(int num1,int  num2){
        a=num1;
        b=num2;
        cout<<"This is a Parameterised Construtor, it has intitialised value of  a to "<<a<<" and b to "<<b<<endl;
    }
};

int main(){
Base obj(30,40);
return 0;
}