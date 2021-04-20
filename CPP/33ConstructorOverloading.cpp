#include<iostream>
using namespace std;
class Base{
    public:
    int a,b,c;
    Base(int num1,int  num2){
        a=num1;
        b=num2;
    }

    Base(int num1,int  num2,int num3){
        a=num1;
        b=num2;
        c=num3;

    }
};

int main(){
Base obj1(30,40);
Base obj2(34,75,3);

cout<<"Two parameters :"<<obj1.a<<" "<<obj1.b<<endl;
cout<<"Three parameters :"<<obj2.a<<" "<<obj2.b<<" "<<obj2.c<<endl;
return 0;
}