#include<iostream>
using namespace std;

class A {
    public:
    int a;
    void showA(){
        cout<<"data of A "<<a<<endl;
    }
    A(){

    }
    A(int A){
        a=A;
    }
};

class B :public A{
    public:
    int b;
    void showB(){
        cout<<"data of A and B "<<a<<" "<<b<<endl;
    }
    B(){

    }
     B(int A,int B){
         a=A;
        b=B;
    }
};

class C : public B{
    public:
    int c;
    C(int A, int B,int C){
        a=A;
        b=B;
        c=C;
    }
    void showC(){
        cout<<"Data of A B and C : "<<a<<" "<<b<<" "<<c<<endl;
        cout<<b;
    }
};


int main(){
    A a =A(5);
    B b =B(5,6);
    C c =C(5,6,7);

    a.showA();
    b.showB();
    c.showC();
    return 0;
}