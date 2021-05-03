#include<iostream>
using namespace std;

class A{
    public:
    int a ,b;
    int sum(){
        return a+b;
    }
    A(int num=5,int num2=6  ){
        a=num;
        b=num2;
    }
};

class B : private A{
    public:
    int c;
    int sumMul(){
        return c*sum();
    }
    B(int d=8):A(){
        c=d;
    }
    B(int a,int b,int d=8):A(a,b){
        c=d;
    }
};

int main(){
B b(50,60,10);
cout<<"(50 + 60 ) * 10 is "<<b.sumMul()<<endl;
B c;
cout<<"(5+6)* 8 is "<<c.sumMul()<<endl;
return 0;
}