#include<iostream>
using namespace std;
 class  Base{
    public:
    int a;
};

class Derived1{
    public:
    int a;
};

class Derived2:public Base{
    public:
    void show(){
         cout<<a<<" of base class Accessible in Derived 2 "<<endl;
    }
};

class Inherited:public Derived1,public Base{
    public:
    void display(){
     cout<<Base::a<<" of base class Accessible in Inherited"<<endl;
        cout<<Derived1::a<<" of derived class Accessible in Inherited"<<endl;
    //a is ambiguos
    }

};


int main(){
    Inherited in ;
    in.Base::a=8;
    in.Derived1::a=10;
    in.display();

    
}