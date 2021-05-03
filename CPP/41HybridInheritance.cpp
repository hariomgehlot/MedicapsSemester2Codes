#include<iostream>
using namespace std;
 class  Base{
    public:
    int a;
};

class Derived1 :virtual Base{
    public:
    void show(){
        cout<<a<<" of base class Accessible in Derived 1 "<<endl;
    }
};


class Derived2 :public Base{
    public:
    void show(){
         cout<<a<<" of base class Accessible in Derived 2 "<<endl;
    }
};


class Inherited:public Derived1,public Derived2{
    public:
    void display(){
     cout<<a<<" of base class Accessible in Inherited"<<endl;
    //a is ambiguos
    }

};


int main(){
    Derived1 d1;
    d1.a=5;
    d1.show();

    Derived2 d2;
    d2.a=7;
    d2.show();
    
}